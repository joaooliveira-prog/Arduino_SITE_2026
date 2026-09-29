// ===== SENSORES =====
const int sensorEsq = 24;
const int sensorMeio = 26;
const int sensorDir = 22;

// ===== PONTE H =====
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

// Velocidades
const int velocidadeNormal = 136; // ~53% (Quando o meio lê algo)
const int velocidadeTurbo  = 245; // ~96% (Nitro)

// ===== TEMPO DE ESPERA PARA O TURBO =====
// Defina aqui em milissegundos o tempo que o sensor do meio precisa
// ficar SEM LER NADA antes de disparar o Nitro (500ms = 0.5 segundo).
const unsigned long atrasoTurbo = 500; 

unsigned long tempoSemLerMeio = 0;
bool contandoSemLer = false;

void setup() {
  pinMode(sensorEsq, INPUT);
  pinMode(sensorMeio, INPUT);
  pinMode(sensorDir, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void motorEsquerdo(int velocidade) {
  analogWrite(IN1, velocidade);
  analogWrite(IN2, 0);
}

void motorDireito(int velocidade) {
  analogWrite(IN3, velocidade);
  analogWrite(IN4, 0);
}

void frente(int velocidadeEsq, int velocidadeDir) {
  motorEsquerdo(velocidadeEsq);
  motorDireito(velocidadeDir);
}

void loop() {
  // LOW  = LED Apagado (Leu a fita / preto)
  // HIGH = LED Aceso   (Não leu nada / branco)
  bool esqLeu  = (digitalRead(sensorEsq) == LOW);
  bool dirLeu  = (digitalRead(sensorDir) == LOW);
  bool meioLeu = (digitalRead(sensorMeio) == LOW);

  // ===== 1. CURVA PARA A ESQUERDA (Sensor da esquerda leu) =====
  if (esqLeu && !dirLeu) {
    contandoSemLer = false; // Zera o temporizador ao entrar em curva
    frente(0, velocidadeNormal);
  }

  // ===== 2. CURVA PARA A DIREITA (Sensor da direita leu) =====
  else if (dirLeu && !esqLeu) {
    contandoSemLer = false; // Zera o temporizador ao entrar em curva
    frente(velocidadeNormal, 0);
  }

  // ===== 3. CRUZAMENTO (Os dois sensores das pontas leram) =====
  else if (esqLeu && dirLeu) {
    contandoSemLer = false;
    frente(velocidadeNormal, velocidadeNormal);
  }

  // ===== 4. SENSOR DO MEIO LER ALGO -> VELOCIDADE NORMAL =====
  else if (meioLeu) {
    contandoSemLer = false; // Reseta o tempo do Turbo
    frente(velocidadeNormal, velocidadeNormal);
  }

  // ===== 5. SENSOR DO MEIO NÃO LER NADA -> CONTA O TEMPO E ATIVA O NITRO =====
  else {
    // Começa a contar o tempo que ficou sem ler
    if (!contandoSemLer) {
      tempoSemLerMeio = millis();
      contandoSemLer = true;
    }

    // Se já passou o tempo do atrasoTurbo (ex: 0.5s) -> NITRO!
    if (millis() - tempoSemLerMeio >= atrasoTurbo) {
      frente(velocidadeTurbo, velocidadeTurbo);
    } 
    else {
      // Enquanto estiver dentro do tempo de espera, vai na velocidade normal
      frente(velocidadeNormal, velocidadeNormal);
    }
  }
}

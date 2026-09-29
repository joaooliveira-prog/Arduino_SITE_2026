# 🏎️ Shellraiser — UENP Race 2026

Projeto desenvolvido pela equipe **Shellraiser** para participação na **UENP Race 2026**, competição realizada durante o **SITe 2026 — Seminário de Informática e Tecnologia da Universidade Estadual do Norte do Paraná (UENP)**.

🥉 **Resultado: 3º lugar na UENP Race 2026**

---

## 🏆 Sobre a competição

A **UENP Race 2026** foi uma competição tecnológica promovida pela Universidade Estadual do Norte do Paraná (UENP), na qual as equipes tiveram o desafio de projetar, montar e programar um **carro autônomo capaz de percorrer uma pista seguindo uma linha**.

A competição envolveu conhecimentos de:

- Programação;
- Arduino;
- Eletrônica;
- Sensores;
- Controle de motores;
- Lógica de programação;
- Sistemas embarcados;
- Robótica;
- Resolução de problemas.

A edição de 2026 contou com **13 equipes inscritas**.

A competição foi realizada no dia **23 de setembro de 2026**, durante o SITe 2026 da UENP.

---

## 🥉 Resultado

A equipe **Shellraiser** conquistou o:

### 🏆 3º lugar — UENP Race 2026

O resultado colocou a equipe no pódio da competição após o desenvolvimento e os testes do veículo autônomo.

---

## 👥 Equipe Shellraiser

A equipe foi formada por:

- **Eduardo Medeiros da Paz** — Líder da equipe
- **Adilson Eduardo Tostes Carmo**
- **João Pedro de Oliveira**
- **Paulo Henrique Medeiros**

---

## 🤖 O projeto

O projeto consiste em um **carro autônomo seguidor de linha controlado por Arduino**.

O veículo utiliza sensores para identificar a posição da linha na pista e, a partir dessas informações, controla os motores de forma independente para realizar correções de trajetória.

O sistema possui **três sensores principais**:

- Sensor esquerdo;
- Sensor central;
- Sensor direito.

Os motores são controlados através de uma **Ponte H**, permitindo que o Arduino controle o comportamento de cada lado do veículo.

---

## ⚙️ Lógica de funcionamento

O software analisa continuamente os valores obtidos pelos sensores.

### Sensor esquerdo

Quando o sensor da esquerda identifica a linha, o sistema realiza uma correção para a esquerda.

### Sensor direito

Quando o sensor da direita identifica a linha, o sistema realiza uma correção para a direita.

### Sensor central

Quando o sensor central identifica a linha, os dois motores funcionam normalmente, mantendo o veículo seguindo em frente.

### Cruzamentos

Quando os sensores laterais detectam a linha simultaneamente, o veículo continua avançando.

### 🚀 Modo Turbo

O código também possui uma estratégia de aumento de velocidade.

Quando determinadas condições dos sensores permanecem durante um intervalo configurado, o veículo aumenta a potência dos motores, permitindo ganhar velocidade em determinados trechos da pista.

No código atual:

```cpp
const int velocidadeNormal = 136;
const int velocidadeTurbo  = 245;

const unsigned long atrasoTurbo = 500;
```

O modo turbo é ativado após aproximadamente **500 ms**, de acordo com a lógica implementada no programa.

---

## 🔧 Principais componentes

O projeto utiliza conceitos e componentes como:

- Arduino;
- Sensores seguidores de linha;
- Ponte H;
- Motores DC;
- Circuitos eletrônicos;
- Programação em C/C++;
- Controle independente dos motores.

---

## 💻 Tecnologias utilizadas

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)

---

## 📁 Estrutura do repositório

```text
Arduino_SITE_2026/
│
├── CarrinhoArduino.cpp
└── README.md
```

### `CarrinhoArduino.cpp`

Contém o código responsável por:

- Leitura dos sensores;
- Controle dos motores;
- Correção da trajetória;
- Identificação de curvas;
- Tratamento de cruzamentos;
- Controle de velocidade;
- Ativação do modo Turbo.

---

## 🎯 Objetivo do projeto

O principal objetivo foi desenvolver um sistema capaz de controlar autonomamente um veículo durante o percurso da UENP Race.

Além do resultado na competição, o projeto permitiu aplicar na prática conhecimentos estudados em áreas como:

- Sistemas de Informação;
- Programação;
- Eletrônica;
- Arduino;
- Robótica;
- Sistemas embarcados;
- Trabalho em equipe.

---

## 🏁 UENP Race 2026

**Evento:** UENP Race 2026  
**Instituição:** Universidade Estadual do Norte do Paraná — UENP  
**Evento acadêmico:** SITe 2026 — Seminário de Informática e Tecnologia  
**Data:** 23/09/2026  
**Equipe:** Shellraiser  
**Resultado:** 🥉 **3º lugar**

🌐 Site da competição:  
https://race.cct.uenp.edu.br/

---

## 🎓 Agradecimentos

Agradecemos à **Universidade Estadual do Norte do Paraná (UENP)**, ao **Centro de Ciências Tecnológicas**, à organização do **SITe 2026** e da **UENP Race 2026** pela realização da competição.

Também agradecemos a todos que contribuíram direta ou indiretamente para o desenvolvimento do projeto.

---

<p align="center">
  <b>🥉 Shellraiser — 3º lugar na UENP Race 2026 🏎️</b>
</p>

# Super Trunfo de Cidades - Desafio em Linguagem C


## 🎓 Projeto Acadêmico – Curso de Análise e Desenvolvimento de Sistemas

**Faculdade:** Estácio  
**Disciplina:** Introdução à Programação de Computadores  
**Professor:** Sérgio Cardoso  
**Autor:** Walclériston Ramos Américo

---

### 📌 Descrição do Projeto

Este projeto é um desafio proposto na disciplina de Introdução à Programação de Computadores, com o objetivo de praticar conceitos da linguagem C, como entrada de dados, manipulação de variáveis, cálculos, exibição de resultados e uso de estruturas condicionais (`if` e `if-else`).

O programa simula o cadastro de **duas cartas do jogo Super Trunfo**, cada uma representando uma cidade brasileira com os seguintes atributos:

- Estado (letra de A a H, convertido para sigla ex.: MG, SC)
- Código da Carta (ex: A01)
- Nome da Cidade
- População (armazenada como `unsigned long int`)
- Área (em km²)
- PIB (em bilhões de reais)
- Número de Pontos Turísticos
- **Densidade Populacional (habitantes por km²)**
- **PIB per Capita (reais por habitante)**
- **Super Poder**: cálculo especial que soma:
  - População  
  - Área  
  - PIB (convertido para reais)  
  - Número de Pontos Turísticos  
  - PIB per Capita  
  - Inverso da Densidade Populacional (quanto menor a densidade, maior o poder)

---

### 🔥 Funcionalidades

- Cadastro de duas cartas com informações completas
- Cálculo automático de:
  - Densidade Populacional
  - PIB per Capita
  - Super Poder
- **Comparação das cartas de duas formas:**
  - **Sem if/else:** usando operadores lógicos para comparar atributo por atributo, retornando 1 (verdadeiro, carta 1 venceu) ou 0 (falso, carta 2 venceu).
  - **Com if/else:** comparação manual de um atributo específico (ex.: População) exibindo qual carta venceu ou se houve empate, com uma mensagem descritiva.

---

### 🛠️ Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Terminal / Prompt de comando

### 🚀 Como Executar o Projeto

1. Clone este repositório:

```sh
git clone https://github.com/wallramosdev/SuperTrunfo.git
```

2. Acesse a pasta do projeto:

```sh
cd super-trunfo-c
```

3. Compile o arquivo com GCC:

```sh
gcc super_trunfo.c -o super_trunfo
```

4. Execute o programa:

```sh
./super_trunfo
```

---

### 📷 Exemplo de Execução

```c
====================================
         SUPER TRUNFO - CIDADES     
====================================

Bem-vindo ao jogo Super-Trunfo
Cadastre duas cartas com os dados das cidades.

Cadastro da Carta 1:

Escolha um Estado digitando uma letra conforme a lista:
A - Acre
B - Bahia
C - Ceará
D - Distrito Federal
E - Espírito Santo
F - Goiás
G - Minas Gerais
H - Santa Catarina

Estado (A a H): G

Defina um código para a carta (ex: G01): G01

Digite o nome da cidade: Nanuque

População: 35038

Área (em km²): 1518166

PIB (em bilhões): 0.808689

Número de Pontos Turísticos: 15

================================================
Carta 1 cadastrada com sucesso!
================================================

Cadastro da Carta 2:

Escolha um Estado digitando uma letra conforme a lista:
A - Acre
B - Bahia
C - Ceará
D - Distrito Federal
E - Espírito Santo
F - Goiás
G - Minas Gerais
H - Santa Catarina

Estado (A a H): H

Defina um código para a carta (ex: H03): H07

Digite o nome da cidade: Florianópolis

População: 537211

Área (em km²): 674844

PIB (em bilhões): 23.684545

Número de Pontos Turísticos: 263

================================================
Carta 2 cadastrada com sucesso!
================================================

============= CARTA 1 =============
Estado: G
Código: G01
Nome da Cidade: Nanuque
População: 35038 habitantes
Área: 1518166.00 km²
PIB: 0.81 bilhões de reais
Número de Pontos Turísticos: 15
Densidade Populacional: 0.02 hab/km²
PIB per Capita: 23080.34 reais
Super Poder: 810265408.00

============= CARTA 2 =============
Estado: H
Código: H07
Nome da Cidade: Florianópolis
População: 537211 habitantes
Área: 674844.00 km²
PIB: 23.68 bilhões de reais
Número de Pontos Turísticos: 263
Densidade Populacional: 0.80 hab/km²
PIB per Capita: 44087.97 reais
Super Poder: 23685801984.00

====== Comparação das Cartas ======
=========== Sem IF/ELSE ===========
População: Carta 1 venceu (0) / Carta 2 venceu (1)
Área: Carta 1 venceu (1) / Carta 2 venceu (0)
PIB: Carta 1 venceu (0) / Carta 2 venceu (1)
Pontos Turísticos: Carta 1 venceu (0) / Carta 2 venceu (1)
Densidade Populacional: Carta 1 venceu (0) / Carta 2 venceu (1)
PIB per Capita: Carta 1 venceu (0) / Carta 2 venceu (1)
Super Poder: Carta 1 venceu (0) / Carta 2 venceu (1)
===================================

====== Comparação das Cartas ======
=========== Com IF/ELSE ===========
======= Atributo: População =======
Carta 1 - Nanuque (MG): 35038
Carta 2 - Florianópolis (SC): 537211
Resultado: Carta 2 (Florianópolis) venceu!
```

---

### 📚 Aprendizados

Este projeto permitiu reforçar os seguintes conceitos:

- Leitura e escrita com scanf e printf
- Conversão de tipos numéricos para cálculos mistos
- Uso de unsigned long int para valores grandes
- Cálculo de densidade populacional e PIB per capita
- Cálculo de Super Poder com soma de atributos diversos
- Comparação de múltiplos atributos:
  - Sem uso de estruturas condicionais
  - Com uso de if e if-else
- Manipulação de strings com ponteiros (const char*) para representar estados
- Boas práticas de formatação e organização de código em C

---

### 📄 Licença

Este projeto é de uso acadêmico e não possui licença comercial.


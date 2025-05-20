# Super Trunfo de Cidades - Desafio em Linguagem C


## 🎓 Projeto Acadêmico – Curso de Análise e Desenvolvimento de Sistemas

**Faculdade:** Estácio  
**Disciplina:** Introdução à Programação de Computadores  
**Professor:** Sérgio Cardoso  
**Autor:** Walclériston Ramos Américo


### 📌 Descrição do Projeto

Este projeto é um desafio proposto na disciplina de Introdução à Programação de Computadore com o objetivo de aplicar os conceitos de entrada, armazenamento e exibição de dados na linguagem C.

O programa simula o cadastro de **duas cartas do jogo Super Trunfo**, cada uma representando uma cidade brasileira com os seguintes atributos:

- Estado (letra de A a H)
- Código da Carta (ex: A01)
- Nome da Cidade
- População
- Área (em km²)
- PIB (em milhões de reais)
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

Após o cadastro, o programa exibe os dados organizados de cada carta e realiza uma **comparação atributo por atributo**, indicando qual carta venceu em cada um. A comparação segue estas regras:

- Para todos os atributos numéricos (exceto densidade populacional), **vence o maior valor**
- Para a densidade populacional, **vence o menor valor**
- O resultado da comparação é exibido com `1` para verdadeiro (Carta 1 venceu) e `0` para falso (Carta 2 venceu)

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
População: Carta 1 venceu (0) / Carta 2 venceu (1)
Área: Carta 1 venceu (1) / Carta 2 venceu (0)
PIB: Carta 1 venceu (0) / Carta 2 venceu (1)
Pontos Turísticos: Carta 1 venceu (0) / Carta 2 venceu (1)
Densidade Populacional: Carta 1 venceu (0) / Carta 2 venceu (1)
PIB per Capita: Carta 1 venceu (0) / Carta 2 venceu (1)
Super Poder: Carta 1 venceu (0) / Carta 2 venceu (1)
===================================
```

### 📚 Aprendizados

Este projeto permitiu reforçar os seguintes conceitos:

- Leitura e escrita com scanf e printf
- Conversão de tipos numéricos para cálculos mistos
- Uso de unsigned long int para valores grandes
- Cálculo de densidade populacional e PIB per capita
- Estruturação lógica sem o uso de estruturas de controle (if, else)
- Comparação de múltiplos atributos com lógica booleana
- Boas práticas de formatação e organização de código em C

### 📄 Licença

Este projeto é de uso acadêmico e não possui licença comercial.


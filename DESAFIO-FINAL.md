# SUPER TRUNFO - CIDADES

## 🎓 Projeto Acadêmico Desafio Final – Curso de Análise e Desenvolvimento de Sistemas

**Faculdade:** Estácio  
**Disciplina:** Introdução à Programação de Computadores  
**Professor:** Sérgio Cardoso  
**Autor:** Walclériston Ramos Américo

---

### 🎯 Descrição do Projeto

Este projeto é uma evolução e implementação do jogo **Super Trunfo - Cidades** desenvolvido em linguagem C, como desafio final da disciplina de Introdução à Programação de Computadores, no curso de Análise e Desenvolvimento de Sistemas da Estácio.

O jogo simula um duelo entre dois jogadores utilizando cartas que representam cidades brasileiras. Cada carta contém informações como:
- Estado
- Código da carta
- Nome da cidade
- População
- Área (em km²)
- PIB (Produto Interno Bruto) em bilhões de reais
- Número de pontos turísticos
- Densidade populacional
- PIB per capita
- Super Poder (soma ponderada dos atributos)

---

### 🛠️ Tecnologias e Recursos Utilizados

- Linguagem:
    - C (padrão C99)
- Bibliotecas:
    - <stdio.h> – Entrada e saída de dados
    - <stdlib.h> – Funções utilitárias (como rand() e system())
    - <string.h> – Manipulação de strings
    - <time.h> – Geração de números aleatórios baseados em tempo
- Ambiente:
    - Compatível com Windows, Linux e MacOS (uso de diretivas condicionais para system("pause") e system("cls"))

---

### 🚫 Sobre a Ausência de Alguns Recursos

Por exigência acadêmica, não foram utilizados:
- Laços de repetição (for, while, do-while)
- Criação de funções
- Estruturas como struct ou vetores dinâmicos

Toda a lógica foi desenvolvida de forma sequencial e linear, priorizando o uso de estruturas condicionais (if/else e switch/case) e operadores ternários.

---

### 💡 Objetivo Acadêmico

O projeto tem como principais objetivos:
- Comprovar domínio dos conceitos fundamentais de:
    - Declaração de variáveis
    - Tipos de dados
    - Operações aritméticas
    - Condicionais (if, else, switch)
    - Entrada e saída de dados (scanf e printf)
- Manipulação correta de strings e caracteres
- Uso de operadores ternários para controle de fluxo
- Aplicação prática de lógica computacional sem uso de funções e laços
- Implementação de cálculos dinâmicos com operações matemáticas

---

### 🚀 Funcionalidades do Projeto

- 🎨 Cadastro de cartas para cada jogador:
    - Uma carta manual (informações digitadas pelo usuário)
    - Uma carta fixa pré-definida
    - Uma carta gerada de forma aleatória
- ⚔️ Batalha em três rodadas:
    - Cada jogador escolhe uma carta por rodada
    - Cada rodada é disputada por um atributo escolhido
    - Os atributos disponíveis são:
        - População
        - Área
        - PIB
        - Pontos Turísticos
        - Densidade Populacional (menor vence)
        - PIB per Capita
        - Super Poder (soma de todos os atributos)
- 📈 Cálculo automático de:
    - Densidade populacional
    - PIB per capita
    - Super Poder (soma ponderada dos atributos, incluindo o inverso da densidade)
- 🏆 Resultado final com exibição do vencedor ou empate

---

### 🗺️ Como Jogar

1. Execute o programa.
2. Cada jogador cadastra uma carta manualmente, informando:
    - Estado (letra A a H)
    - Código da carta
    - Nome da cidade
    - População
    - Área
    - PIB
    - Número de pontos turísticos
3. As outras duas cartas de cada jogador são automaticamente carregadas (uma fixa e uma aleatória).
4. O jogo prossegue em três rounds:
    - Em cada round, o jogador escolhe uma carta e um atributo.
    - As cartas não podem ser repetidas entre os rounds.
    - Os atributos escolhidos também não podem ser repetidos.
5. Ao final das três rodadas, o programa apresenta:
    - Detalhes de cada confronto
    - Quem venceu cada round
    - Quem venceu o jogo (ou se houve empate)

---

### 📊 Modelagem dos Atributos
| Atributo | Tipo de dado |
| --- | --- |
| Estado | char |
| Código da Carta | char[5] |
| Nome da Cidade | char[50] |
| População | unsigned long int |
| Área | float |
| PIB | float (em bilhões) |
| Pontos Turísticos | int
| Densidade | float (calculado) |
| PIB per Capita | float (calculado) |
| Super Poder | float (calculado) |

---

### ⚙️ Cálculos Utilizados
- Densidade Populacional:

$$
Densidade = \frac{População}{Área}
$$

- PIB per Capita:​

$$
PIB\ per\ Capita = \frac{PIB \times 1000000000}{População}
$$

- Inverso da Densidade (para atributo onde menor vence)

$$
Inverso\ da\ Densidade = \frac{1}{Densidade}
$$

- Super Poder:

$$
Super\ Poder = População + Área + (PIB \times 1000000000) + Pontos\ Turísticos + PIB\ per\ Capita + Inverso\ da\ Densidade
$$
​
---

### 📝 Limitações Intencionais

O código é propositalmente extenso e sequencial.
Não usa funções, laços (for, while, do-while) ou estruturas (struct).
Essa abordagem foi adotada para:
Fortalecer o entendimento de controle de fluxo sem abstração.
Estimular o raciocínio lógico linear.
Atender os requisitos acadêmicos da disciplina.

---

### 🎯 Possíveis Melhorias Futuras

Caso o projeto evolua para além da disciplina, pode ser refatorado para incluir:
Uso de struct para representar uma carta.
Vetores ou listas para manipular cartas dinamicamente.
Funções para modularizar:
Cadastro
Cálculo dos atributos
Comparação
Exibição dos resultados
Implementação de laços (for, while) para reduzir repetição de código.
Validação de entradas mais robusta.

---

### 📄 Licença

Este projeto é de uso acadêmico e não possui licença comercial.


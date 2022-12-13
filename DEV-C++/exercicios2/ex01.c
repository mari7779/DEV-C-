#include<stdio.h> // inclui(include) o arquivo-cabeçalho stdio.h, que tem declarações para realizar a leitura de dados e outras funções

 void main () // void que significa vazio permite fazer funções sem retorno ou parâmetros e main serve como ponto de partida e controla a execução do programa
 { // abre o código
 int n1, n2, n3, n4, soma; //declara as variaveis
 n1 = 1; // atribui o valor a variavel n1
 n2 = 2; // atribui o valor a variavel n2
 n3 = 4; // atribui o valor a variavel n3
 n4 = 5; // atribui o valor a variavel n4
 soma = n1 + n2 + n3 + n4; // faz o calculo da soma das quatro variaveis com seus valores atribuidos nas linhas acima
 printf("O resultado e: %d\n", soma); // imprime(print) o resultado da soma das variaveis e lê a variavel soma
} // fecha o código

#include<stdio.h> // inclui(include) o arquivo-cabeçalho stdio.h, que tem declarações para realizar a leitura de dados e outras funções
#include<math.h> // inclui o arquivo-cabeçalho math.h, que tem funções matemáticas

 void main() // void que significa vazio permite fazer funções sem retorno ou parâmetros e main serve como ponto de partida e controla a execução do programa
 {
 // para compilar use gcc -lm fonte.c -o executavel
 float num=2, quadrado; // declara as variaveis como 
 quadrado = pow(num,2); // faz o calculo da variavel num ao quadrado, com pow que é usado para elevar o numero por um expoente
 printf("O resultado é: %f\n", quadrado); // imprime na tela o resultado do calculo e lê a variavel quadrado
 }

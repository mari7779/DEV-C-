#include<stdio.h> // inclui(include) o arquivo-cabe�alho stdio.h, que tem declara��es para realizar a leitura de dados e outras fun��es
#include<math.h> // inclui o arquivo-cabe�alho math.h, que tem fun��es matem�ticas

 void main() // void que significa vazio permite fazer fun��es sem retorno ou par�metros e main serve como ponto de partida e controla a execu��o do programa
 {
 // para compilar use gcc -lm fonte.c -o executavel
 float num=2, quadrado; // declara as variaveis como 
 quadrado = pow(num,2); // faz o calculo da variavel num ao quadrado, com pow que � usado para elevar o numero por um expoente
 printf("O resultado �: %f\n", quadrado); // imprime na tela o resultado do calculo e l� a variavel quadrado
 }

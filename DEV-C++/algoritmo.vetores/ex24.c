#include <stdio.h>

int main() {
   int i, n, shigher, slower;
   float height, heighthigher = 0, heightlower=0;

   for (i=0; i <10; i++) {
      printf("digite o numero do aluno e a altura (em metros) separados por um espaco: ");
      scanf("%d %f", &n, &height);

      if(height > heighthigher) {
         heighthigher = height/100;
        shigher = n;
      }

      if (height < heightlower) {
         heightlower = height/100;
         slower= n;
      }
   }

   printf("o aluno mais alto tem o numero: %d, altura: %.2f m\n", shigher, heighthigher);
   printf("o aluno mais baixo tem o numero: %d, altura: %.2f m\n", slower, heightlower);

   return 0;
}


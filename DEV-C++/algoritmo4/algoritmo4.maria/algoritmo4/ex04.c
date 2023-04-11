#include<math.h>
#include <stdio.h>
main()

{
	float desin, vames, mes, juros, renda, lucro;
	
	printf("o deposito inicial: \n");
	scanf("%f", &desin);
	
	printf("o valor mensal: \n");
	scanf("%f", &vames);
		
	printf("quantos meses: \n");
	scanf("%f", &mes);
	
	juros=0.005;
	renda=(desin+(vames*mes));
	lucro= renda*juros;
	
	// for(int a=0; a <= mes; a++){     aux= desin*juros*a;   	aux= juros+desin+aux;   printf("%f", aux); //
	
	printf("o lucro é de %f", lucro);
	}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor1, valor2, valor3, valor4, sum1, sum2;
	printf("Ingrese el primer valor de la suma N1: ");
	scanf("%d",&valor1);
	printf("Ingrese el segundo valor de la suma N1: ");
	scanf("%d",&valor2);
	printf("Ingrese el primer valor de suma N2: ");
	scanf("%d",&valor3);
	printf("Ingrese el segundo valor de suma N2: ");
	scanf("%d",&valor4);
	sum1 = valor1 + valor2;
	sum2 = valor3 + valor4;	
	if(sum1 > sum2){
		printf("La suma numero 1 es mayor");
	}	else{ printf("La suma numero 2 es mayor");
	}				
	return 0;
}

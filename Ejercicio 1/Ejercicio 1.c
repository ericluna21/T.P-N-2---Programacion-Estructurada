#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor1;
	int valor2;
	
	printf("Ingrese el primer valor: \n");
	scanf("%d", &valor1);
	printf("Ingrese el segundo valor: \n");
	scanf("%d", &valor2);
	if ( valor1==valor2){
		printf("Los valores son iguales");
	}else{
		printf("Los valores no son iguales");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor1, valor2, valor3, sumadeelem, promedio;
	
	printf("Ingrese el primer valor: ");
	scanf("%d",&valor1);
	printf("Ingrese el segundo valor: ");
	scanf("%d",&valor2);
	printf("Ingrese el tercer valor: ");
	scanf("%d",&valor3);
	
	sumadeelem = valor1 + valor2 + valor3;
	promedio = sumadeelem / 3;
	
	if(valor1 > promedio && valor1 > valor2 && valor1 > valor3){
		printf("El primer valor %d es mayor al promedio.",valor1);
	}
	if(valor2 > promedio && valor2 > valor1 && valor2 > valor3){
		printf("El segundo valor %d es mayor al promedio.",valor2);
	}
	if(valor3 > promedio && valor3 > valor1 && valor3 > valor2){
		printf("El tercer valor %d es mayor al promedio.",valor3);
	}
	if(valor1 == valor2 && valor2 == valor3){
		printf("Los valores son iguales, vuelva a intentarlo nuevamente.");
	}
	return 0;
}

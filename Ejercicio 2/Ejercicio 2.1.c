#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor1;
	
	printf("Ingrese un valor: \n ");
	scanf("%d",&valor1);
	if (valor1 == 1) {
		printf("El valor es positivo.");
	}else {
		if (valor1 == 0){
		printf ("Valor igual a Cero.");
		}else{		
		printf ("El valor es negativo"); 
		}
	}
	return 0;
}

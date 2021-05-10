#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia, mes, anio;
	
	printf("Ingrese un dia:");
	scanf("%d",&dia);
	printf("Ingrese un mes:");
	scanf("%d",&mes);
	printf("Ingrese un año:");
	scanf("%d",&anio);
	
	//validar mes
	if ( mes >=1 && mes <= 12){
		if (((mes == 4 || mes == 6 || mes == 9 || mes ==11 ) &&((dia >0) && (dia <=30))) || ((mes == 1 || mes == 3 || mes== 5 || mes == 7 || mes == 9 || mes == 10) && ((dia >0) && (dia <=31)))){
			printf("Dia valido");
		}
		else
			if (( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ) && (mes==2 && dia <=29))
			printf("Dia valido");
			else
			printf("Dia invalido");	
	}else  
		printf("Dia invalido");

}




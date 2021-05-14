#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valorhr, tiempotrab,sueldobase, bonus1, bonus2;		
	printf("Ingrese el valor de la hora a pagar: ");
	scanf("%d",&valorhr);
	printf("Ingrese la cantidad de horas trabajadas por el empleado: ");
	scanf("%d",&tiempotrab);
	sueldobase = valorhr * tiempotrab;
	bonus1 = sueldobase + 100;
	bonus2 = sueldobase + 200;
	if(tiempotrab > 50 && tiempotrab < 151){
		printf("el sueldo del empleado es %d$",bonus1);
	}else{
		if(tiempotrab > 150){
			printf("El sueldo del empleado es %d$",bonus2);
		}else{
			printf("El sueldo del empleado es %d$",sueldobase);
		}
		}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "spanish");
	int sueldbase, cat, antig, sueldocat1, bonuscat1;
	printf("Ingrese sueldo del empleado: ");
	scanf("%d",&sueldbase);
	printf("Ingrese categoria del empleado: ");
	scanf("%d",&cat);
	printf("Ingrese años de antigüedad del empleado: ");
	scanf("%d",&antig);
	bonuscat1 = antig * 50;
	sueldocat1 = sueldbase + bonuscat1;
	if(cat >=2  && cat <= 5 && antig >= 6 && antig <= 60 && sueldbase >= 1 ){
		printf("El sueldo del empleado de categoría %d es de: %d$",cat, sueldbase);
	}else{
		if(cat == 1 && antig >= 6 && antig <= 60){
		printf("El sueldo del empleado de categoría %d es de: %d$",cat, sueldocat1);
	}else{
		printf("Datos inválidos, intentar nuevamente.");
	}
	}
	return 0;
}

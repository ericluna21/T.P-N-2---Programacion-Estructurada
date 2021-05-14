#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int horas, cat, sueldcat1, sueldcat2, sueldcat3;
printf("Ingresar horas trabajadas por el empleado: ");
scanf("%d",&horas);
printf("Ingresar categoria del empleado: ");
scanf("%d",&cat);
sueldcat1 = horas * 50;
sueldcat2 = horas * 70;
sueldcat3 = horas * 80;
if(cat == 1 && horas > 0){
	printf("El sueldo del empleado de categoria %d es: %d$",cat, sueldcat1);
}  else{
	   if(cat == 2 && horas > 0){
		printf("El sueldo del empleado de categoria %d es: %d$",cat, sueldcat2);
	}     else{
		      if(cat == 3 && horas > 0){
		      	printf("El sueldo del empleado de categoria %d es: %d$",cat, sueldcat3);
			  }  else{
			  	    printf("Los datos ingresados son incorrectos, intente nuevamente.");
			  }
	}   
}
	return 0;
}

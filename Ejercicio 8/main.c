#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int edad1, edad2;
	float estat1, estat2;
	printf("Ingresar la edad de la primer persona: ");
	scanf("%d",&edad1);
	printf("Ingresar la estatura de la primer persona: ");
	scanf("%f",&estat1);
	printf("Ingresar la edad de la segunda persona: ");
	scanf("%d",&edad2);
	printf("Ingresar la estatura de la segunda persona: ");
	scanf("%f",&estat2);
	if(edad1 > edad2){
		printf("La altura de la primer persona es %f",estat1);
	}else{
		printf("La altura de la segunda persona es %f",estat2);
	}
	return 0;
}

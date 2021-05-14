#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ladoa, ladob, ladoc;

    printf("Ingrese el primer lado del triangulo: ");
    scanf("%d",&ladoa);
    printf("Ingrese el segundo lado del triangulo: ");
    scanf("%d",&ladob);
    printf("Ingrese el tercer lado del triangulo: ");
    scanf("%d",&ladoc);


    if(ladoa == ladob && ladob == ladoc){
        printf("Su triangulo es un triangulo equilatero.");
    }else{
        if (((ladoa == ladob )||(ladob==ladoc) || (ladoa == ladoc)) && (((ladoa != ladoc)||(ladob != ladoc))||(ladoa != ladob)))
        printf("Su triangulo es un triangulo isosceles.");
        else{
        printf("Su triangulo es un triangulo escaleno");
    	}
    }	
	return 0;
}

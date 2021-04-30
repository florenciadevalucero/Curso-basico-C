#include<stdio.h>


int main(){
	char nombre[30], sexo[20];
	int edad;
    fflush(stdin);
	
	
	printf("Cual es su nombre: ");
	gets(nombre);
	
	
	printf("\nQue genero es: ");
	gets(sexo);
	
	printf("\nQue edad tiene: ");
	scanf("%i", &edad);

	
	
	if((strcmp(sexo,"masculino")==0) && (edad > 17)){
		printf("\nCumple con los requisitos, su nombre es %s",nombre);
	}
	else{
		printf("\nNo cumple con los requisitos");
	}
	
	
	return 0;
}

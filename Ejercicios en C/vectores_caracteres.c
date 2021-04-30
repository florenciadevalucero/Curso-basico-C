/* Hacer 2 arrays de cadenas de caracteres, almacenar dos nombres
cada uno dentro de sus respectiva variable, y luego intercambiar el contenido de los 
arrays */


#include<stdio.h>
#include<conio.h>
#define TAM 20


int main(){
	
	char nombre1[TAM], apellido[TAM], aux[TAM];
	fflush(stdin);
	
	printf("Ingrese su primer nombre: ");
	gets(nombre1);
	printf("\nIngrese su apellido: ");
	gets(apellido);
	
	
	strcpy(aux, nombre1);
	strcpy(nombre1, apellido);
	strcpy(apellido, aux);
	
	printf("\nSu primer nombre es: %s\n", apellido);
	printf("\nSu apellido es: %s", nombre1);
	
	getch();
	return 0;
}


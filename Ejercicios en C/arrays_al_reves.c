/* Realice un programa que permita leer una cadena de caracteres y que devuelva
el número de caracteres que tiene dicha cadena e imprimir dicha cadena al revés 
*/


#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	char nombre[20];
	
	i = 0;
	
	printf("Ingrese su nombre: "); //guardamos la cadena de caracteres del nombre
	gets(nombre);
	fflush(stdin);
	
	while (nombre[i] != '\0'){ //inicializamos un bucle que mientras el nombre sea distinto de 0 letras
								//el bucle cuente todos los caracteres del vector
		i++;
	}
	
	printf("\nEl nombre tiene %i letras", i);
	printf("\nEl nombre al reves es: ");
	
	while (nombre[i] >= 0){
		printf("%c", nombre[i--]); //acá el bucle va a imprimir el arrays al revés yendo i--
	}
	getch();
	return 0;
}

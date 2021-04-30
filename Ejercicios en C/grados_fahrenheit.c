// Convertir de grados celsius a grado fahrenheit

#include<stdio.h>

int main(){
	int celsius, fahrenheit;
	
	printf("Bienvenido \n");
	fflush;
	printf("Ingrese la temperatura que desea convertir: ");
	scanf("%i", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("\nLa conversion de %i grados Celsius son: %i grados Fahrenheit", celsius, fahrenheit);
	
	printf("\nGracias por utilizar el servicio\n");
	return 0;
}

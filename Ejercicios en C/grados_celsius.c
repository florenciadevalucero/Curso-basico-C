/* Hacer un programa que pida celcius y devuelva un menu para convertir la temperatura farenheit o kelvin:
F = (celsius)/5 + 32
K= Celsius + 273.15
*/

#include<stdio.h>
float fahrenheit( float celsius);
float kelvin(float celsius);




int main(){
	int opc;
	float F, K, celsius;
	

	
	
	do{
		printf("Ingrese los grados en celsius que desea convertir: ");
		scanf("%f", &celsius);
		fflush(stdin);
		printf("\n1. Convertir los grados a Fahrenheit");
		printf("\n2. Convertir los grados a Kelvin");
		printf("\n3. Salir");
		printf("\nElige una opcion: ");
		scanf("%i", &opc);
		
		
		switch(opc){
			case 1:F = fahrenheit(celsius);
			printf("Los grados celsius son grados fahrenheit: %.2f", F); break;
			case 2: K = kelvin(celsius);
			printf("Son grados Kelvin: %.2f", K); break;
		}
	}while(opc != 3);	
	
	
	return 0;
}

float fahrenheit(float celsius){
	float F = 0;
	F = (9 * celsius)/5 + 32;
	return F;
	
}
float kelvin(float celsius){
	float K;
	K= 273.15 + celsius;
	return K;
	
}

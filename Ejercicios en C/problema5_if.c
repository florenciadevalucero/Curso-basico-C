/* Define si un número es par o impar */

#include<stdio.h>

int main(){
	
	int numero, par, impar;
	
	printf("Escribe un numero entero: ");
	scanf("%i", &numero);
	
	if ( numero % 2 == 0){
		par = numero;
		printf("El numero %i es par", par);
	}
	
	if (numero % 2 != 0){
		impar = numero;
		printf("El numero %i es impar", impar);
	}
	return 0;
}

/*Problema 2: comprobar si un numero que ingrese es positvo o negativo*/


#include<stdio.h>

int main(){
	
	
	int numero_ingresado, negativo, positivo;
	
	printf("Ingrese un numero al azar: ");
	scanf("%i", &numero_ingresado);
	
	
	if (numero_ingresado >= 0){
		positivo = numero_ingresado;
		printf("El numero %i es positivo", positivo);
	
	}
	
	if (numero_ingresado <= 0){
		negativo = numero_ingresado;
		printf("El numero %i es negativo", negativo);
	}
	
	
	return 0;
}

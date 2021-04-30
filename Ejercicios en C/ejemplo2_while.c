//1. suma de los n primeros numeros


#include<stdio.h>

int main(){
	int contador, n, suma; //siempre es bueno inicializar las variables en cero cuando van a guardar un resultado
	suma = 0;
	printf("Ingrese el total de numeros a sumar: ");
	scanf("%i", &n);
	
	contador = 1;
	
	while(contador <= n){
		suma += contador;
		contador++;
	}
	
	printf("\n La suma es: %i", suma);
	
	return 0;
}

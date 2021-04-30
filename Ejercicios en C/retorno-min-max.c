/*
Escriba una función que retorne un número al azar entre un mínimo y un máximo
dados por parámetro
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX -999
#define MIN 999

int nroMin(int minimo){
	int azar;

	srand(time(NULL));
	azar = rand() % 10;
	
	if( azar < MIN){
		minimo = azar;
	}
	return(minimo);
}
int nroMax(int maximo)
{
	int azar;
	srand(time(NULL));
	
	azar = rand();
	
	if(azar > MAX){
		maximo = azar;
	}
	return(maximo);
}
int main()
{
	int nro1, nro2, minimo, maximo;
	nro1 = nroMax(maximo);
	nro2 = nroMin (minimo);
	
	if(nro1 < nro2){
		printf("El numero %d es menor que %d", nro1, nro2);
	}
	else if(nro1 == nro2){
		printf("Los numeros son iguales");
	}
	else{
		printf("El numero %d es mayor que %d", nro1, nro2);
	}
	return 0;
}

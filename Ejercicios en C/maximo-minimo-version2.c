/*5. Escriba la función int azar(int min, int max) que retorne número al azar entre
min y max.
Haga un programa main que inicialice un vector de 5 elementos con valores al
azar entre 2 y 6, y luego los muestre.*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MINIMO 99999;
#define MAXIMO -99999;
int min()
{
	int minimo;
	
	srand(time(NULL)); //este comando mas la biblioteca stlib.h generan numeros aleatorios
	minimo = rand();
	
	return(minimo);
}
int max()
{
	int maximo;
	
	srand(time(NULL));
	maximo = rand();
	
	return(maximo);
}


int main()
{
	int mini, maxi;
	maxi = max;
	mini = min;
	
	if(mini < maxi){
		printf("El numero minimo es %d", mini);
		printf("\nEl numero maximo es %d", maxi);
	}
	else{
		printf("\nEl numero minimo es %d", maxi);
		printf("\nEl numero maximo es %d", mini);
	}
	return 0;
}

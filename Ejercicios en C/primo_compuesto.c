/* Determinar si un numero es primo o no */



#include<stdio.h>


int main(){
	int n1,i, cont;
	cont = 0;
	
	printf("\nIngrese un numero: ");
	scanf("%i", &n1);
	
	for(i = 1; i <= n1; i++ ){
		if(n1 % i == 0){
			cont++;
		}
	}
		
	if(cont > 2){
		printf("No es un numero primo, se trata de un numero compuesto");
	}
	else{
		printf("\nEl numero es primo");
	}
	
	return 0;
}

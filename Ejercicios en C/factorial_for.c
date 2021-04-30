/* 11. Hacr un programa que calcule la suma de factoriales*/

#include<stdio.h>


int main(){
	int i, numero1, numero2, factorial= 1, factorial2 = 1, suma;
	
	printf("\nIngrese un numero: "); scanf("%i", &numero1);
	
	printf("\nIngrse otro numero: "); scanf("%i", &numero2);
	
	
	for(i=1; i <= numero1; i++){
		factorial *= i;
	}
	printf("\n El factorial dl primer numero es: %i", factorial);
	
	for(i=1; i <= numero2; i++){
		factorial2 *= i;
	}
	
	printf("\n El factorial del segundo nro es: %i", factorial2);
	
	suma = factorial + factorial2;
	printf("\n La suma de los dos factoriales es: %i", suma);
	
	return 0;
}

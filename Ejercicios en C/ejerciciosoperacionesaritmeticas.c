/*1. Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos y dividirlos. */
#include<stdio.h>
int main(){ 

	float a,b,suma,resta,multiplicacion,division;
	 
	a=0;
	b = 0;
	suma = 0;
	resta = 0;
	multiplicacion = 0;
	division = 0;
	 
	 
	 
	 
	printf("Escriba dos numeros: \n");
	scanf("%f %f",&a, &b);
	
	
	
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	printf("\nEl resultado de la suma es: %.2f", suma);
	printf("\nEl resultado de la resta es: %.2f", resta);
	printf("\nEl resultado de la multiplicacion es: %.2f", multiplicacion);
	printf("\nEl resultado de la division es: %.2f", division);
	
	
	return 0;
}

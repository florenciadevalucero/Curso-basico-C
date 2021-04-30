/* 2. Hacer un programa que realice la media aritmética de dos numeros*/


#include<stdio.h>
void aritmetica(int numero){
	int numero1, numero2, media;
	
	
	printf("Ingrese dos números: ");
	scanf("%i %i", &numero1, &numero2);
	
	media = (numero1 + numero2) / 2;	
	
	printf("La media aritmetica de los dos numeros dados es: %i", media);
	
}

int main(){
	int x;
	
	aritmetica(x);
	
	
	
	return 0;
}


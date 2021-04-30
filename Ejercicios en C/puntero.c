//punteros

#include<stdio.h>


int main(){
	int n = 30, *p_n = &n; //asi se declaran los punteros
	float n2 = 5.6, *p_n2 = &n2;
	char n3 = 'a', *p_n3 = &n3;
	
	printf("Dato entero: %i", *p_n);
	printf("\nPosicion: %p", p_n);
	printf("\nDato flotante: %.1f", *p_n2);
	printf("\nPosicion: %p", p_n2);
	printf("\nDato caracter: %c", *p_n3);
	printf("\nPosicion: %p", p_n3);
	
	
	return 0;
}

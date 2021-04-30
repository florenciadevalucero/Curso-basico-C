// Pedir dos números al usuario y aplicarle las operaciones aritméticas 

#include<stdio.h>

int main (){
	int n1, n2;
	float suma, resta, mult, div;
	suma = 0;
	resta = 0;
	mult = 0;
	div = 0;
	printf("Bienvenido\n");
	
	printf("\nIngrese dos numeros: ");
	scanf("%i %i", &n1, &n2);
	
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1/n2;
	
	printf("\nLa suma de sus numeros es: %.1f", suma);
	printf("\nLa diferencia de %i y %i es: %.1f",n1, n2, resta);
	printf("\nLa multiplicacion de esos dos numeros es de: %.1f", mult);
	printf("\nLa division de %i con el numero %i es: %.1f", n1, n2, div);
	
	printf("\nGracias por su visita");
	
	
	
	return 0;
}

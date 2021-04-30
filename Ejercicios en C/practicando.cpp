/* escribir un programa que lea un número entero ingresado por teclado, lo multiplique por
dos, y luego lo muestre por pantalla */







#include<stdio.h>


int main(){
	int numero, multiplicar;
	
	printf("Ingrese un número: ");
	scanf("%i", &numero);
	
	multiplicar = numero * 2;
	
	printf("Su numero multiplicado por dos es: %i", multiplicar);
	
	
	return 0;
}

#include<stdio.h>

int nroentero()
{
	int valor;
	
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &valor);
	
	return(valor);
}

float nroreal()
{
	float real;
	
	printf("Ingrese un n�mero real: ");
	scanf("%f", &real);
	
	return(real);
}


int main()
{
	int a;
	float b;
	
	a = nroentero();
	b = nroreal();
	
	printf("El numero entero ingresado es %d y el valor real ingresado es %.2f", a, b);
	
	return 0;
}

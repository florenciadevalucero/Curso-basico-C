/*Escriba una función que pida un número entero entre 2 y 5. Si el valor ingresado es
incorrecto vuelva a pedirlo.
*/

#include<stdio.h>
void pedirNumero()
{
	int nroEntero;
	
	do{
		printf("Ingrese un numero del 1 al 5: ");
		scanf("%d", &nroEntero);
	
	}while(nroEntero < 2 || nroEntero > 5);
	
	printf("\nEl numero ingresado es: %d", nroEntero);
}
int main()
{
	pedirNumero();
	return 0;
}

/* 5. Calcular el mayor de dos numeros leidos del teclado y visualizarlo en pantalla.*/

#include<stdio.h>

int main(){
	float numero1, numero2, mayor, menor;
	
	printf("Ingrese 2 numeros: ");
	scanf("%f %f", &numero1, &numero2);
	
	
	if (numero1 > numero2){
		mayor = numero1;
		printf("El numero %.1f es mayor que %.1f", numero1, numero2);
	}
	else if(numero2> numero1){
		menor = numero2;
		printf("El numero %.1f es menor que %.1f", numero1, numero2);
	}
	else{
		printf("Ambos numeros son iguales");
	}
	
	return 0;
}

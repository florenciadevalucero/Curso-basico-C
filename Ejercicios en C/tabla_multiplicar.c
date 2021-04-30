/* Hacer una tabla de multiplcar hasta el 20 del número que nos digiten
por pantalla. USAR PROCEDIMIENTO Y PEDIR NUMERO EN FUNCIÓN PRINCIPAL */

#include<stdio.h>
void tabla(int a){
	int i, resultado;
	
	for(i=1; i<=20; i++){
		resultado = a * i;
		
		printf("\n%i x %i = %i", a, i, resultado);
	}
	
}

int main(){
	int numero;
	numero = 0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero);
	
	tabla(numero);
	
	return 0;
}


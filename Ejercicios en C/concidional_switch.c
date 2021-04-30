/* Condicional multiples switch()
switch(selector) {   //solo puede ser int o char


case etiqueta1 : sentencias1; break;
case etiqueta2 : sentencias2; break;
case etiqueta3 : sentencias3; break;
default: sentencias;       //caso contrario del switch como el else
}
*/

//Ejemplo del numero
#include<stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero entre (1-3): ");
	scanf("%i", &numero);
	
	switch(numero){
		case 1: printf("Es el numero 1"); break;
		case 2:printf("Es el numero 2"); break;
		case 3: printf("Es el numero 3"); break;
		default: printf("No ha digitado un numero correcto");
	}
	
	return 0;
}

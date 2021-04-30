/* Hacer un programa que pida por pantalla un número del 1 al 10 y mediante un procedemiento 
muestre por pantalla el número escrito en letras */

#include<stdio.h>

void menu();


int main(){

	
	menu();
	
	
	return 0;
}

void menu(){
	
	int numero;
	
	printf("\nIngrese un numero del 1 al 10: ");
	scanf("%i", &numero);
	
	switch(numero){
		case  1: printf("\nUNO"); break;
		case  2: printf("\nDOS"); break;
		case  3: printf("\nTRES"); break;
		case  4: printf("\nCUATRO"); break;
		case  5: printf("\nCINCO"); break;
		case  6: printf("\nSEIS"); break;
		case  7: printf("\nSIETE"); break;
		case  8: printf("\nOCHO"); break;
		case  9: printf("\nNUEVE"); break;
		case 10: printf("\nDIEZ"); break;
		default: printf("\nNumero ingresado incorrecto\n"); break;
	}
}

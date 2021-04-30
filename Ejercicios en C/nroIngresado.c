/*Escriba una función que pida un número entero entre un mínimo y un máximo dados
por parámetro. Si el valor ingresado es incorrecto vuelva a pedirlo.*/

#include<stdio.h>

int pedirNumero(int nroIngresado){
	int  minimo, maximo;
	printf("Ingrese el numero limite minimo que desea: ");
	scanf("%d", &minimo);
	
	printf("\nIngrese el numero limite maximo que desea: ");
	scanf("%d", &maximo);
	

	do{
		printf("\nIngrese un numero entre el minimo o el maximo: ");
		scanf("%d", &nroIngresado);
		
	}while(nroIngresado <minimo || nroIngresado >maximo);
		
	if(nroIngresado >= minimo || nroIngresado <= maximo){
		printf("\nEl numero ingresado esta en el intervalo del limite inferior y del superior");
	}
	else{
		printf("\nEl numero ingresasdo no esta en el intervalo de los limites");
	}
	
	return(nroIngresado);
}

int main(){
	int  nro, nroIngresado; 
	nro = pedirNumero(nroIngresado);
	
	printf("\nEl numero ingresado es: %d", nro);
	
	return 0;
}

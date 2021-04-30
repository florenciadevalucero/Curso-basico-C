/*15. Hacer un programa que simule un cajero automático con un saldo inicial de 
1000 dolaes */

#include<stdio.h>

int main(){
	int opcion;
	float agregar,retirar,saldo=1000;
	
	printf("\tBienvenido a su cajero virtual!!!!!");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero de la cuenta");
	printf("\n3. Salir");
	printf("\nSeleccione una opcion: ");
	scanf("%i", &opcion);
	
	
	switch(opcion){
		case 1: printf("\n¿Cuanto dinero desea ingresar en la cuenta: ");
				scanf("%f", &agregar); 
				saldo += agregar;
				printf("El saldo total es de: %.2f",saldo);
		break;
		case 2: printf("¿Cuanto dinero desea retirar: ");
				scanf("%f", &retirar);
				if(retirar > saldo){
				printf("La cantidad a retirar es mayor al saldo");
				}
				else{
					saldo -= retirar;
					printf("El saldo disponible es de: %.2f",saldo);
				}
		break;
		case 3:break;
		default: printf("Se equivoco de opcion de menu");
	}
	
	
	
	return 0;
}

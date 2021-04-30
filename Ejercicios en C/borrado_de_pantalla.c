//9. Hacer un programa que borre la pantalla al pulsar 1.

#include<stdio.h>
#include<stdlib.h>


int main (){
	char tecla;
	
	printf("Programa de borrado de pantalla!!!");
	printf("\n-----------------------------\n");
	printf("\n------------------------------\n");
	printf("\nDigite el numero 1: ");
	scanf("%c", &tecla);
	
	if(tecla == '1'){
		system("cls"); // funcion system clean screen
		printf("Ha funcionando, el limpiado de pantalla");
	}
	else{
		fflush(stdin);
		printf("\nNo ha funcionado el limpiado de pantalla");
		puts("\nPor favor, digite el numero 1:");
		scanf("%c", &tecla);
		
		if(tecla == '1'){
			system("cls");
			printf("Funciono");
		}
		else{
			printf("\nNo funciono");
		}
	}
	
	
	
	return 0;
}

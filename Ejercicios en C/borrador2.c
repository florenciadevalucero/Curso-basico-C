#include<stdio.h>

int main(){
	
	int numero, pequeno, grande, nuevo1, nuevo2;
	numero = 0;
	pequeno = 0;
	grande =0;
	
	printf("Hola nico, te invito a jugar, tienes que adivinar el numero...");
	
	printf("\nEscribe un numero del 1 al 10: ");
	scanf("%i", &numero);
	
	fflush(stdin);
	if(numero < 8){
		while(numero < 8){
		printf("\nEs un numero muy pequeno, elige mas grande: ");
		scanf("%i", &pequeno);
		}
	}
	if(pequeno > 8){
		while(pequeno > 8){
		
		printf("\nEs un numero demasiado grande, elige mas pequeño: ");
		scanf("%i", &grande);
		}
	
	}
	else{
		while(numero == 8){
		printf("Adivinaste!!!!!! GANASTE!!!");
		break;
		}
	}

	return 0;
}

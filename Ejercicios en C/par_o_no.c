//Determinar si un número es par o no 

#include<stdio.h>


int main(){
	int n1, n2;
	char c;
	
	printf("Bienvenido\n");
	
	printf("Ingrese un numero: ");
	scanf("%i", &n1);
	
	if (n1 % 2 == 0){
		printf("\nEl numero %i es par", n1);
	}
	else{
		printf("\nEl numero %i es impar", n1);
	
	}
	

	
	
	return 0;
}

//1. Determinar si un numero es par o impar


#include<stdio.h>
/* int comprobar(int n){
	int n1;
	
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	
	
	if(n1 % 2 == 0){
		return 0;
	}
	else{
		return 2;
	}
}


int main(){
	int probar, x;
	
	probar = comprobar(x);
	
	if(probar == 0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	
	
	
	return 0;
} */
//otra forma de hacerlo: sin return



#include<stdio.h>

void comprobar(int numero){
	int numero1;
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero1);
	
	if(numero1 % 2 == 0){
		printf("\nEl numero es par");
		
	}
	else{
		printf("\n El numero es impar");
	}
}
int main(){
	int numero_guardado;
	
	comprobar(numero_guardado);
	
	
	return 0;
}

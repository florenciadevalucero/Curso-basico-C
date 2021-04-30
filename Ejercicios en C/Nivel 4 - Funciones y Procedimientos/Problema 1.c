/*Funciones:

	-Funciones sin retorno de valor:
	
		void nombreFuncion(parametros){
			instrucciones...
		}

	-Funciones con retorno de valor:
	
		tipo_dato nombreFuncion(parametro){
			Instrucciones...
			return expresion
		}

*/




/*Saludo por pantalla con funcion void

void saludo(){
	printf("\nHola que tal?\n");
}

int main(){
	saludo();
	
	return 0;
}
*/


/*
#include<stdio.h>
int funcion_sumar(int juanito, int beto){
	int numero1, numero2, suma;
	
	numero1 = numero2 = suma = 0;
	
	
	printf("Digite 2 numeros:\n ");
	scanf("%i %i", &numero1, &numero2);
	
	suma = numero1 + numero2;
	
	return suma;
	
}

int main(){
	int cuenta,n1,n2;
	cuenta = 0;
	
	cuenta = funcion_sumar(n1,n2);
	printf("El resultado es:%i",cuenta);
	
	return 0;
}

*/











//1. Determinar si un numero es par o no.
//caso1 con retorno de valor
//caso2 sin retorno de valor
/*
#include<stdio.h>

int comprobar(int n){
	int n1;
	printf("Digite un numero: ");
	scanf("%i", &n1);
	if(n1%2==0){
		return 0;
	}
	else{
		return 1;
	}
	
}

int main(){
	int probar,x;
	
	probar = comprobar(x);
	if(probar == 0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	return 0;
}

*/






#include<stdio.h>

void comprobar(int n){

	
	if(n%2==0){
		printf("\n El numero es par");
	}
	else{
		printf("\n El numero es impar");
	}
}
int main(){
	int numero;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	comprobar(numero);
	
	
	return 0;
}


	



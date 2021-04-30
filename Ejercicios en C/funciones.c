// Funciones

/* Funciones:

	* Funciones sin retorno de valor:
	
		void nombre Funcion (parametros){
			intrucciones...
		}
		
	*Funciones con retorno de valor:
		tipo_dato nombrefuncion( parametros){
			Instrucciones...
			return expresion
		}
*/

//1. Saludo por pantalla con funcion void
//2. sumar 2 numeros

//#include<stdio.h>


/*void saludo(){
	printf("\nHola que tal?\n");
}

int main(){
	 saludo();
	
	
	return 0;
} */

//2.

#include<stdio.h>

int funcion_sumar(int n1, int n2){
	int numero1, numero2, suma;
	
	numero1 = numero2 = suma = 0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i", &numero1, &numero2);
	
	suma = numero1 + numero2;
	return suma;
}

int main(){
	int cuenta, n1, n2;
	cuenta = 0;
	
	cuenta = funcion_sumar(n1, n2);
	
	printf("El resultado es: %i", cuenta);
	
	return 0;
}

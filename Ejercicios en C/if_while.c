/* Digite un numero, si el numero supera a 10, 
multiplique los primeros 10 numeros, sino,  sumelos */


#include<stdio.h>

int main(){
	int numero, multiplicacion, suma, contador;
	contador = 1;
	
	printf("Ingrese un numero al azar: ");
	scanf("%i", &numero);
	
	fflush(stdin);
	
	if(numero > 10){
		while (contador<= 10){
			multiplicacion= multiplicacion * contador;
			contador++;
		}
		printf("\n La multiplicacion es: %i", multiplicacion);
	}
	else{
		while(contador <= 10){
			suma += contador;
			contador++;
		}
		printf("\n La suma es: %i", suma);
	}
	
	
	return 0;
}

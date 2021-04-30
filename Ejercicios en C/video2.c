//Directivas del preprocesador y variables
//contiene lo que son las directivas y las macro

#include<stdio.h> /* nos sirve para poder imprimir cosas por pantalla y pedir 
					al usuario que nos ingrese un dato*/
					
#include<string.h> //otras librerias
#define PI 3.1416  // macro/ constante es una variable con un valor fijo 

int y =5; // variable global, esta fuera de la función definida

int main(){
	int x = 10; // variable local se denomina, porque esta dentro de una función, lo puedo usar dentro de esta funcion
	
	float suma = 0; //variable de tipo flotante es decir con numeros decimales
	
	suma = PI + x; // 
	
	printf("la suma es: %.2f",suma); /* para imprimir los valores numericos %i (la letra depende del 
										tipo de dato q queres imprimir si es nro entero
									%.2f fi es decimal, luego cerramos las comillas y señalamos 
									que variable vamos a imprimir en el %f */
	
	
	return 0;
}

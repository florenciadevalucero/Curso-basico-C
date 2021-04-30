#include<stdio.h>


int main(){
	
	float celsius, operacion;
	celsius =0;
	operacion =0;
	
	
	printf("Ingrese los grados celsius: ");
	scanf("%f", &celsius);
	
	operacion = (celsius * 1.8) + 32;
	
	printf("Los grados fahrenheit son: %.1f", operacion);
	
	return 0;
}

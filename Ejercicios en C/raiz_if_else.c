/* Ingrese un numero y calcule e imprima 
su raiz cuadrada. Si el numero es negativo imprima el numero 
y un mensaje "tiene raiz imaginaria*/





#include<stdio.h>
#include<math.h>

int main(){
	float numero, imaginario,raiz;
	
	printf("Ingrese un número: ");
	scanf("%f", &numero);
	
	if(numero < 0){
		imaginario = numero;
		printf(" %.1f Tiene raiz imaginaria", numero);
	}
	else if( numero == 0){
		printf("la raiz del numero es igual a cero");
	}
	else{
		raiz = sqrt (numero); //sqrt es UNICAMENTE para raiz cuadrada// si queremos raices mas elevadas
		printf("La raiz cuadrada es %.1f",raiz); //usamos como el de potencia pow(variable,(double)1/n...
	}
	
	return 0;
}

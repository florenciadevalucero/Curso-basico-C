/*6. Ingrese un n�mero y calcule e imprima su ra�z cuadrada. Si el numero es 
negativo imprima el n�mero y un mensaje que diga �tiene ra�z imaginaria� */

#include<stdio.h>
#include<math.h>

int main(){
	int numero;
	float raiz_cuadrada;
	
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	if(numero>0){
		raiz_cuadrada = pow(numero,0.5);
		printf("Su raiz cuadrada es: %f",raiz_cuadrada);
	}
	else{
		printf("\nEl numero tiene raiz imaginaria");
	}
	return 0;
}

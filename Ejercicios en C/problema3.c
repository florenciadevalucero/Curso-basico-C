#include<stdio.h>
#include<math.h>

#define PI 3.14



int main(){
	float radio,circunferencia;
	
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	
	circunferencia = PI * pow(radio,2);
	
	printf("La longitud de la circunferencia es: %.2f", circunferencia);
	
	
	
	
	return 0;
}

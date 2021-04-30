/* Dadas las horas trabajadas deuna persona y el valor
por hora. Calcular su salario e imprimirlo*/


#include<stdio.h>


int main(){
	
	float horas_trabajadas, valor_hora, salario;
	
	
	printf("Escriba cuántas horas trabajadas: ");
	scanf("%f",&horas_trabajadas);
	
	
	printf("Diga cuánto cobra la hora: ");
	scanf("%f",&valor_hora);
	
	
	salario = (horas_trabajadas * valor_hora);
	
	printf("Su salario es: %.2f", salario);
	
	
	
	
	return 0;
}

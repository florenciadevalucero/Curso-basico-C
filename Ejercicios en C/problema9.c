/* 9. Calcular el nuevo salario de un obrero si obtuvo 
un incremento del 25% sobre su salario anterior*/


#include<stdio.h>


int main(){
	
	
	float salario_anterior, nuevo_salario;
	
	printf("Ingrese su salario anterior: ");
	scanf("%f",&salario_anterior);
	
	nuevo_salario = salario_anterior + (salario_anterior * 25)/ 100;
	
	printf("Su nuevo salario es: $%.2f",nuevo_salario);
	
	return 0;
}

/*11. Calcular la cantidad de segundos que están inclidos en l número de horas,
minutos y segundos ingresados por el usuario*/

#include<stdio.h>



int main(){
	
	int horas, minutos, segundos, resultado_segundos;
	
	printf("Ingrese una hora: ");
	scanf("%i", &horas);
	
	printf("Ingrese minutos: ");
	scanf("%i", &minutos);
	
	printf("Ingrese segundos: ");
	scanf("%i", &segundos);
	
	resultado_segundos = ((horas * 3600) + (minutos * 60) + segundos);
	
	printf("La cantidad de segundos que hay en su hora ingresada son: %i", resultado_segundos);
	
	
	return 0;
}

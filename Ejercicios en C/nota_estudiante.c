#include<stdio.h>


int main(){
	
	int nota;
	
	printf("Ingrese la nota de su examen: ");
	scanf("%i", &nota);
	
	switch(nota){
		case 10: printf("Excelente!"); break;
		case 9 : printf("Sobresaliente!"); break;
		case 8 : printf("Sobresaliente!"); break;
		case 7 : printf("Aprobado"); break;
		case 6 : printf("Notable"); break;
		case 5 : printf("Desaprobado"); break;
		case 4 : printf ("Desaprobado"); break;
		case 3 : printf ("Desaprobado"); break;
		case 2 : printf("Aplazo"); break;
		case 1 : printf("Aplazo"); break;
		default: printf("Nota ingresada incorrecta");
	}
	
	
	return 0;
}

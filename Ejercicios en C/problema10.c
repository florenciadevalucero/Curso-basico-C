/*problema 10*/

#include<stdio.h>


int main(){
	
	float nota1, nota2, nota3, examen_final, trabajo_final, nota_parciales, calificacion_final;
	
	printf("Ingrese la calificacion del primer parcial de la materia de Algoritmos: ");
	scanf("%f", &nota1);
	
	printf("Escriba la nota del segundo parcial: ");
	scanf("%f", &nota2);
	
	printf("Escriba la nota del tercer pacial: ");
	scanf("%f", &nota3);
	
	nota_parciales = ((nota1 + nota2 + nota3) / 3) * 0.55;
	
	printf("Escriba la calificación que obtuvo en el examen final: ");
	scanf("%f", &examen_final);
	
	examen_final = (examen_final * 0.30);
	
	
	printf("Escriba cuanto se saco en el trabajo final: ");
	scanf("%f", &trabajo_final);
	
	trabajo_final = (trabajo_final) * 0.15;
	
	calificacion_final = (nota_parciales + examen_final + trabajo_final);
	
	printf("Su calificion final en la materia de algoritmos: %.1f", calificacion_final);
	
	
	
	
	
	return 0;
}

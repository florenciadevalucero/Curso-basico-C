/* Condicional if de dos alternativas: if_else

	if (condicion)
		Accion1
	else
		Accion2
*/


#include<stdio.h>


int main(){
	
	float nota;
	
	printf("Digite la nota del examen: ");
	scanf("%f", &nota);
	
	if(nota > 10 ){
		printf("El alumno esta aprobado");
	}
	else{
		printf("El alumno esta desaprobado");
	}
	
	
	
	return 0;
}

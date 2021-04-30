/* Hacer una estructura llamada alumno, en la cual se tendrá: nombre, edad, promedio,
pedir al usuario los datos para tres alumnos, comprobar cual de los tres tiene el mejor promedio y 
posteriormente imprimir los datoos del alumno.
 */


#include<stdio.h>
#include<stdlib.h>

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	int posicion, i; 
	float mejor_promedio;
	mejor_promedio = -999;
	
	
	for(i=0; i<3; i++){
		fflush(stdin);
		printf("%i. Ingrese su nombre: ", i+1);
		gets(alumnos[i].nombre);
		printf("%i. Ingrese su edad: ", i+1);
		scanf("%i", &alumnos[i].edad);
		printf("%i. Ingrese su promedio: ", i+1);
		scanf("%f", &alumnos[i].promedio);
		printf("\n");
		
		}
	for(i=0; i<3; i++){
		if(alumnos[i].promedio > mejor_promedio){
			mejor_promedio = alumnos[i].promedio;
			posicion = i;
			
	}

	}
	printf("\n\nEl alumno con la mejor nota es: ");
	printf("\nNombre: %s", alumnos[posicion].nombre);
	printf("\nSu edad es: %i", alumnos[posicion].edad);
	printf("\nSu promedio es: %.1f\n\n", alumnos[posicion].promedio);

	system("pause");
	return 0;
}

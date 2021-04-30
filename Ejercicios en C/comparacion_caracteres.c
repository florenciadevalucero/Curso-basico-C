
/*Ingresar por teclado el nombre,
 la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo 
 masculino y mayor de edad, el nombre de la persona. 
 */



#include<stdio.h>


int main(){
	char nombre[30], sexo[20];
	int edad;
	
	
	printf("Cual es su nombre: ");
	gets(nombre);
	
	fflush(stdin);
	
	printf("\nQue edad tiene: ");
	scanf("%i", &edad);
	
	printf("\nQue genero es: ");
	gets(sexo);
	
	if((strcmp(sexo,"masculino")==0) && (edad > 17)){
		printf("\nEs hombre y mayor de edad, su nombre es %s",nombre);
	}
	else{
		printf("\nEs menor de edad y mujer");
	}
	
	return 0;
}

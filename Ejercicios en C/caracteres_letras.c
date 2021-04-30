/* 7. Ingesar por teclado el nombre y el signo de cualquier perso nae imprima,
el nombre solo si la persona es signo aries, caso contrario imprima no es signo aries*/


#include<stdio.h>

int main(){
	char nombre[30], signo[20];
	
	printf("Ingrese su nombre: ");
	gets(nombre);    //Para guardar en la variable nombres y letras se usa "gets(variable);"
	printf("Diga cual es su signo: ");
	gets(signo); //scanf solo lee hasta el primer espacio
	
	if(strcmp(signo, "aries")==0){   //se usa para comparar cadenas de caracteres if(strcmp(variable, "palabra que queres comparar"))
		printf("\n Es signo aries, su nombre es: %s", nombre); //para saber si la variables es igual a la palabra ==0
	} //usamos la %s ya que no es un numero entero ni decimal. Si no que son letras
	else{
		printf("No es signo aries");
	}
	
	
	return 0;
}

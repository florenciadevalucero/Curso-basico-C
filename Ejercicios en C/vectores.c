/* Crear un programa que tnga un array (vector) de 100 números aleatorios
entre 1 y 1000. Una vez creado el programa organizarlo de tal manera que almacene 
los números pares en un array y los impares en otro */

#include<stdio.h>
#include<conio.h>
#include<time.h>

void aleatorio(){
	int i, a[100];
	
	for(i=0; i<100; i++){
		a[i]= 0+ rand() % ((1000 + 1) - 0);
		printf("%i...%i\n", i+1, a[i]); // para imprimir el índice es "%i", i+1
		
	}	
	for(i=0; i<100; i++){
	if(a[i] % 2 == 0){
			printf("par:%i\n",a[i]);
		} 
	}
	for(i=0; i<100; i++){
		if(a[i] % 2 != 0){
			printf("impar:%i\n", a[i]);
		}
	}
}


int main(){
	int a[100];
	
	srand(time(NULL));
	
	aleatorio();
	
	
	getch();
	return 0;
}

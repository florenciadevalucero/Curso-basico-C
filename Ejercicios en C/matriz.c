/* Hacer una matriz 2*2, ingresarle números y copiar su contenido a otra matriz */

#include<stdio.h>
#include<conio.h>


int main(){
	int matriz[2][2] = {{2,3} , {5,8}}; //siempre que tenemos los valores de matrices
	int matriz2[2][2],filas, columnas; //copiamos siempre otros datos en otro int
	
	for(filas=0; filas<2; filas++){
		for(columnas=0; columnas<2; columnas++){
			matriz2[filas][columnas] = matriz[filas][columnas];
		}
	}
	
	
	for(filas=0; filas<2; filas++){
		for(columnas=0; columnas < 2; columnas++){
			printf("%i ", matriz2[filas][columnas]);
		}
		printf("\n");
		 
	}
	
	
	getch();
	return 0;
}

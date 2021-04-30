/* Sumar dos matrices, pidiendo al usuario el número de filas y columnas y 
además los elementos de cada matriz, mostrar el resultado */


#include<stdio.h>
#include<conio.h>

void sumar(int a[50][50], int b[50][50], int filas, int columnas){
	int suma[filas][columnas],i,j;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			suma[i][j] = a[i][j] + b[i][j];
			
		}
		printf("\n");	
	}
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("%i ", suma[i][j]);
			
		}
		printf("\n");
	}
}

int main(){
	int matriz[50][50];
	int matriz2[50][50], suma[50][50];
	int filas, columnas, i, j;
	
	printf("Ingrese el numero de filas: ");
	scanf("%i", &filas);
	printf("Ingrese el numero de columnas: ");
	scanf("%i", &columnas);
	fflush(stdin);
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Digite el numero matriz1[%i][%i]: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\nIngrese el numero de filas de la segunda matriz: ");
	scanf("%i", &filas);
	printf("Ingrese el numero de columnas de la segunda matriz: ");
	scanf("%i", &columnas);
	
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			printf("Digite el numero matriz2[%i][%i]: ",i+1,j+1);
			scanf("%i", &matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\nSuma: ");
	sumar(matriz, matriz2, filas, columnas);
	
	getch();
	return 0;
}




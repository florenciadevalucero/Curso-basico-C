/* Hacer un arreglo de estructura llamada atleta para N atletas que contengo:
nombre,pais, numero_medalla, y devuelva los datos (nombre pais) del altleta que ha
ganado el mayor numero de medallas
*/


#include<stdio.h>
#include<stdlib.h>

struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atletas[100];
int main(){
	int mayor_medallas, pos,i,n;
	mayor_medallas = -9999;
	
	printf("Ingrese el numero de atletas: ");
	scanf("%i", &n);
	
	
	for(i=0; i < n; i++){
		fflush(stdin);
		printf("\n%i. Ingrese el nombre: ",i+1);
		gets(atletas[i].nombre);
		printf("\n%i. Ingrese de que pais es: ", i+1);
		gets(atletas[i].pais);
		printf("\n%i. Ingrese el numero de medallas que obtuvo: ", i+1);
		scanf("%i", &atletas[i].numero_medallas);
		printf("\n");
	}
	for(i=0; i < n; i++){
		if(atletas[i].numero_medallas > mayor_medallas){
			mayor_medallas = atletas[i].numero_medallas;
			pos = i;
		}
	}
	printf("El atleta que mas gano medallas es: \n");
	printf("\nNombre: %s", atletas[pos].nombre);
	printf("\nPais: %s", atletas[pos].pais);
	printf("\nNumero de medallas ganadas: %i\n", atletas[pos].numero_medallas);
	
	system("pause");
	return 0;
}

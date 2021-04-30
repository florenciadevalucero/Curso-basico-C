/*4.Escriba la función void leerCadena(char mensaje[], char cadena[], int
largoMax) que imprima el mensaje en la pantalla,
lea una cadena por teclado y la retorne en el parámetro cadena.
Haga un programa main que utilice dicha función para
inicializar un vector (¿matriz?) de 5 nombres y apellidos de personas y luego los muestre*/

#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define N 5
#define LARGOMAX 500
void leerCadena(char mensaje[], char nombres[],int LargoMax){

    char basura;
   
    printf("%s",mensaje);
    scanf("%[^\n]", nombres);
    scanf("%c", &basura);
}
int main()
{

    int i;
    char cadena[LARGOMAX],nombres[N][LARGOMAX];
    int let;
    for (i = 0; i < N; i++){
        leerCadena("Digite su nombre y apellido: \n", cadena, LARGOMAX);
        strcpy(nombres[i],cadena);
/*Indicamos un solo subindice para que cargue la cadena, toda la fila.
Si indicamos 2 subindices indicamos el caracter no la cadena*/
    }
    
    for (i = 0; i < N; i++){
        printf("%s", nombres[i]);
        printf("\n");
    }
   
    return 0;
}

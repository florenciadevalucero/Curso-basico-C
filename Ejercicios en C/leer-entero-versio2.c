/*Escriba la función int leerEntero(char mensaje[]) que imprima el mensaje en la
pantalla, lea un entero por teclado y lo retorne. Haga un programa main que utilice dicha
función para inicializar un vector de 5 edades de árboles y luego los muestre.*/

#include <stdio.h>

#define N 5
#define M 100

int leerEntero(char mensaje[]){
    int n;
    printf("%s", mensaje);
    scanf("%d",&n);
    return n;
}   

int main(){
    char mensaje[M] = "Digite el numero para guardarlo: ";

    int arboles[N],
        i;

    printf("Digite %d edades de arboles:\n", N);
    for(i = 0; i < N; i++){
        arboles[i] = leerEntero(mensaje);
    }
    
    printf("\n");

    for(i = 0; i < N; i++){
        printf("Edad arbol numero %d: %d\n",i+1, arboles[i]);
    }
    return 0;
}

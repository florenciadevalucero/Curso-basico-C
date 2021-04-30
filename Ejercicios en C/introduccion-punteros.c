/*
En otros lenguajes existe el pasaje de parámetros por referencia, en el cual
si cambiamos el valor dentro de la función también se cambia en las variables de 
las llamadas. En C, funcionan así los punteros.
Notas:  
o Para utilizar el puntero en la función utilizar el operador *.
o Para pasar por parámetro el puntero a una variable utilizar el operador &. 
*/
#include <stdio.h>

void incrementa(int *a)
{
    *a = *a + 1; //Esta variable va a ser un puntero
}

int main() 
{
    int x = 0;

    incrementa(&x);
    incrementa(&x);
    incrementa(&x);

    printf("El valor incrementado 3 veces es: %d\n", x);

    return 0;
} 

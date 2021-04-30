/*
En otros lenguajes existe el pasaje de par�metros por referencia, en el cual
si cambiamos el valor dentro de la funci�n tambi�n se cambia en las variables de 
las llamadas. En C, funcionan as� los punteros.
Notas:  
o Para utilizar el puntero en la funci�n utilizar el operador *.
o Para pasar por par�metro el puntero a una variable utilizar el operador &. 
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

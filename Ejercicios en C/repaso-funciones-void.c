#include <stdio.h>

void incrementa(int a)
{
    a = a + 1;
}

int main() 
{
    int x = 0;

    incrementa(x);
    incrementa(x);
    incrementa(x);
/* Lo que nos damos cuenta es que si modificamos el valor de un parámetro de una función,
su variable en la llamada no se modifica, y permanece en el valor que le asignamos.
Esto ocurre porque C el pasaje de parámetros es por valor. Es decir, no cambia el valor de las
variables originales al modificar el valor de los parámetros.
*/
    printf("El valor incrementado 3 veces es: %d\n", x);

    return 0;
} 

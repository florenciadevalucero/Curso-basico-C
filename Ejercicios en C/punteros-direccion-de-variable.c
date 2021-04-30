#include <stdio.h>
#include <stdlib.h>


// Punteros en C++

int main(int argc, char const *argv[])
{

    int *p, *c;
    int a = 20;
    int b[] = {10, 11, 12, 13, 14, 15};

    *p = NULL;
    printf("La direccion de memoria de *p es %p\n", p);
    // La direccion de memoria de *p es (null)

    p = &a;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d185dc y su valor es 20

    a = a + 20;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d185dc y su valor es 40

    *p = 33;
    printf("La direccion de memoria de 'p' es %p y su valor es %d y 'a' vale %d\n", p, *p, a);
    //La direccion de memoria de 'p' es 0x7ffd39d185dc y su valor es 33 y 'a' vale 33

    c = p;
    printf("La direccion de memoria de 'c' es %p y su valor es %d y 'a' vale %d\n", c, *c, a);
    //La direccion de memoria de 'c' es 0x7ffd39d185dc y su valor es 33 y 'a' vale 33

    p = &b[0];
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d185f0 y su valor es 10

    p++;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d185f4 y su valor es 11

    p += 3;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d18600 y su valor es 14

    p += 3;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d1860c y su valor es -541372965

    *p = 10;
    printf("La direccion de memoria de 'p' es %p y su valor es %d\n", p, *p);
    //La direccion de memoria de 'p' es 0x7ffd39d1860c y su valor es 10

    return 0;
}

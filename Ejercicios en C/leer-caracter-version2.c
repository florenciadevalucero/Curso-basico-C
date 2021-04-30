/*3. Escriba la función char leerChar(char mensaje[]) 
que imprima el mensaje en la
pantalla, lea un char por teclado 
y lo retorne. Haga un programa main que utilice dicha
función para inicializar un vector de 5 caracteres
y luego los muestre.*/

#include<stdio.h>
#include<string.h>
#define LONGITUD 100
char leerMensaje(char mensaje[], char )
int main()
{
 char nombre[LONGITUD];
 char apellido[LONGITUD];
 char completo[LONGITUD]; /* nombre y apellido */
 char basura;
 printf("Ingrese su nombre: ");
 scanf("%[^\n]", nombre); /* o &nombre[0] */
 scanf("%c", &basura); /* elimina el \n */
 printf("Ingrese su apellido: ");
 scanf("%[^\n]", apellido); /* o &apellido[0] */
 /* copiamos nombre en la cadena completo */
 strcpy(completo, nombre);
 /* concatenamos un espacio en blanco */
 strcat(completo, " ");
 /* concatenamos el apellido */
 strcat(completo, apellido);
 printf("Su nombre completo es: %s.\n", completo);
 return 0;

<<<<<<< HEAD
<div align="center">
  <h1>Curso programación en C</h1>
</div>


# Introducción al documento

El contenido de este documento esta basado en el curso del profesor de la UNRN sede andina Martin Morixe 



# Tabla de contenido
- [Introducción al documento](#introducción-al-documento)
- [Tabla de contenido](#tabla-de-contenido)
- [Unidades I y II - Algoritmos e Introducción al Lenguaje C](#unidades-i-y-ii---algoritmos-e-introducción-al-lenguaje-c)
	- [Herramientas a utilizar](#herramientas-a-utilizar)
	- [¿Editores de textos?](#editores-de-textos)
	- [Compilador](#compilador)
	- [Lenguaje de Programación](#lenguaje-de-programación)
	- [Programación](#programación)
	- [Programas y Algorítmos](#programas-y-algorítmos)
	- [Compilación](#compilación)
	- [Algunos Conceptos fundamentales](#algunos-conceptos-fundamentales)
	- [Unidades de Medida de la Información](#unidades-de-medida-de-la-información)
- [Uso de biblotecas](#uso-de-biblotecas)
	- [Generación de Números Aleatorios](#generación-de-números-aleatorios)
	- [Operaciones Matemáticas](#operaciones-matemáticas)
	- [Vectores](#vectores)
	- [Vectores: acceso a variables](#vectores-acceso-a-variables)
	- [Vectores: inicialización](#vectores-inicialización)
	- [Vectores: inicialización dinámica](#vectores-inicialización-dinámica)
	- [Vectores: inicialización estática](#vectores-inicialización-estática)
	- [Vectores: uso](#vectores-uso)
	- [Vectores: frecuencia de un número](#vectores-frecuencia-de-un-número)
	- [Vectores: vectores paralelos](#vectores-vectores-paralelos)
	- [Vectores: máximo, mínimos, contadores y acumuladores](#vectores-máximo-mínimos-contadores-y-acumuladores)
	- [Cadena de caracteres](#cadena-de-caracteres)
	- [Cadena de caracteres: impresión en pantalla](#cadena-de-caracteres-impresión-en-pantalla)
	- [Cadena de caracteres: ingreso por teclado](#cadena-de-caracteres-ingreso-por-teclado)
	- [Cadena de caracteres: ingreso por teclado con scanf()](#cadena-de-caracteres-ingreso-por-teclado-con-scanf)
	- [Cadena de caracteres: ingreso por teclado con fgets()](#cadena-de-caracteres-ingreso-por-teclado-con-fgets)
	- [Cadena de caracteres: biblioteca de funciones string.h](#cadena-de-caracteres-biblioteca-de-funciones-stringh)
	- [Cadena de caracteres: funciones de conversión de tipos](#cadena-de-caracteres-funciones-de-conversión-de-tipos)
	- [Matrices](#matrices)
	- [Matrices: acceso a variables](#matrices-acceso-a-variables)
	- [Matrices: inicialización](#matrices-inicialización)
	- [Matrices: inicialización dinámica](#matrices-inicialización-dinámica)
	- [Matrices: inicialización estática](#matrices-inicialización-estática)
	- [Matrices: uso](#matrices-uso)
- [Unidad IV – Funciones](#unidad-iv--funciones)
	- [Funciones: Conceptos](#funciones-conceptos)
	- [Funciones: valores de retorno](#funciones-valores-de-retorno)
	- [Funciones: parámetros](#funciones-parámetros)
	- [Funciones: uso de void (procedimientos)](#funciones-uso-de-void-procedimientos)
	- [Funciones: parámetros por referencia y por valor](#funciones-parámetros-por-referencia-y-por-valor)
	- [Funciones: vectores, cadenas y matrices por parámetro](#funciones-vectores-cadenas-y-matrices-por-parámetro)
	- [Funciones: pasaje de parámetros referencia / valor – síntesis](#funciones-pasaje-de-parámetros-referencia--valor--síntesis)
	- [Funciones: ejemplos](#funciones-ejemplos)
	- [Alcance de una variable](#alcance-de-una-variable)
	- [Recursión](#recursión)
	- [Uso de parámetros en la función main](#uso-de-parámetros-en-la-función-main)


- [Unidades III - Biblotecas y arreglos ](#Unidades-I-y-I-Algoritmos-e-Introducción-al-Lenguaje-C)
  - [Uso de biblotecas](#Operadores-aritméticos)
  - [Generación de números aleatorios](#¿Qué-es-una-variable?)
  - [Operaciones matemáticas](#Operadores-aritméticos)
 - [Vectores](#Operadores-aritméticos)  
	- [Vectores: acceso a variables](#¿Qué-es-una-variable?)
    - [Vectores: inicialización](#¿Qué-es-una-variable?)
    - [Vectores: inicialización dinámica](#¿Qué-es-una-variable?)
    - [Vectores: inicialización estática](#¿Qué-es-una-variable?)
    - [Vectores: uso](#¿Qué-es-una-variable?)
    - [Vectores: frecuencia de un número](#¿Qué-es-una-variable?)
	- [Vectores: vectores paralelos](#¿Qué-es-una-variable?)
    - [Vectores: máximo,mínimo,contadores y a acumuladores](#¿Qué-es-una-variable?)
    
  - [Cadena de caracteres](#Trabajando-con-texto.-Cadenas-de-caracteres)
    - [Cadena de caracteres: impresión en pantalla](#¿Qué-es-una-variable?)
    - [Cadena de caracteres: ingreso por teclado](#¿Qué-es-una-variable?)
    - [Cadena de caracteres: ingreso de teclado con scanf()](#¿Qué-es-una-variable?)
    - [Cadena de caracteres: ingreso por teclado con fgets()](#¿Qué-es-una-variable?)
    - [Cadena de caracteres: bibloteca de funciones sting.h](#¿Qué-es-una-variable?)
	- [Cadena de caracteres: funciones de conversión de tipos](#¿Qué-es-una-variable?)
    - [Bibloteca ctype.h](#¿Qué-es-una-variable?)
  - [Matrices](#Trabajando-con-texto.-Slices)
    - [Matrices: acceso a variables](#Proyecto-palíndromo)
    - [Matrices: inicializacion](#¿Qué-es-una-variable?)
    - [Matrices: inicializacion dinámica](#Herramientas-para-programar)
    - [Matrices: inicialización estática](#Construyendo-el-camino-de-un-programa-con-condicionales)
   - [Matrices: uso](#Varios-paises-en-mi-conversor-de-monedas)
  



- [Unidades V - Estuctura de Datos](#Unidades-I-y-I-Algoritmos-e-Introducción-al-Lenguaje C)
 
    - [Concepto de Estrucutra de datos](#Operadores-aritméticos)
    - [Arreglos de Estructura de datos](#¿Qué-es-una-variable?)
    

# Unidades I y II - Algoritmos e Introducción al Lenguaje C
## Herramientas a utilizar
Para programar en lenguaje C necesitaremos un editor de textos y un compilador.

##  ¿Editores de textos?
Cualquier editor de textos servirá. Sin embargo, se recomiendan editores de textos que estén pensados para programadores. Por ejemplo:
• Visual Studio Code
• Atom
• Sublime
• Brackets

## Compilador

• GCC (Linux)
• MinGW (Windows): https://sourceforge.net/projects/mingw/files/
Al instalar MinGW en Windows es necesario agregar la carpeta de instalación al path (variables de entorno) del sistema (normalmente: c:\mingw\bin)

 
 
##  Lenguaje de Programación
Un lenguaje de programación es un idioma artificial diseñado para expresar computaciones que pueden ser llevadas a cabo por máquinas como las computadoras. Pueden usarse para crear programas que controlen el comportamiento físico y lógico de una máquina, para expresar algoritmos con precisión, o como modo de comunicación humana. Está formado por un conjunto de símbolos y reglas sintácticas y semánticas que definen su estructura y el significado de sus elementos y expresiones. Al proceso por el cual se escribe, se prueba, se depura, se compila y se mantiene el código fuente de un programa informático se le llama programación.
También la palabra programación se define como el proceso de creación de un programa de computadora, mediante la aplicación de procedimientos lógicos, a través de los siguientes pasos:
• El desarrollo lógico del programa para resolver un problema en particular.
• Escritura de la lógica del programa empleando un lenguaje de programación específico (codificación del programa).
• Ensamblaje o compilación del programa hasta convertirlo en lenguaje de máquina.
• Prueba y depuración del programa.
• Desarrollo de la documentación.
Existe un error común que trata por sinónimos los términos 'lenguaje de programación' y 'lenguaje informático'. Los lenguajes informáticos engloban a los lenguajes de programación y a otros más, como por ejemplo HTML (lenguaje para el marcado de páginas web que no es propiamente un
lenguaje de programación, sino un conjunto de instrucciones que permiten diseñar el contenido de los documentos).
Permite especificar de manera precisa sobre qué datos debe operar una computadora, cómo deben ser almacenados o transmitidos y qué acciones debe tomar bajo una variada gama de circunstancias.
Todo esto, a través de un lenguaje que intenta estar relativamente próximo al lenguaje humano o natural. Una característica relevante de los lenguajes de programación es precisamente que más de un programador pueda usar un conjunto común de instrucciones que sean comprendidas entre ellos
para realizar la construcción de un programa de forma colaborativa.
Para que la computadora entienda nuestras instrucciones debe usarse un lenguaje específico conocido como código de máquina, el cual la máquina comprende fácilmente, pero que lo hace excesivamente complicado para las personas. De hecho sólo consiste en cadenas extensas de números 0 y 1. Éste es el lenguaje que entienden los microprocesadores y el único que son capaces de ejecutar.
Para facilitar el trabajo, los primeros operadores de computadoras decidieron hacer un traductor para reemplazar los 0 y 1 por palabras o abstracción de palabras y letras provenientes del inglés; éste se conoce como lenguaje ensamblador (o assembler). Por ejemplo, para sumar se usa la instrucción
ADD de la palabra inglesa (sumar). El lenguaje ensamblador sigue la misma estructura del lenguaje máquina, pero las letras y palabras son más fáciles de recordar y entender que los números. Ejemplo: la instrucción “ADD 3” (que sumaría 3 al valor de un registro específico (típicamente el acumulador) pordría traducirse como 0001 0011 (elección arbitraria donde los primeros 4 números binarios (1 en decimal) se referiría a la instrucción “sumar” y los últimos 4 números binarios (3 en decimal) se referiría al valor que se debe sumar. La necesidad de recordar secuencias de programación para las acciones usuales llevó a denominarlas con nombres fáciles de memorizar y asociar: ADD (sumar), SUB (restar), MUL (multiplicar), CALL (ejecutar subrutina), etc. A esta secuencia de posiciones se le denominó instrucciones, y a este conjunto de instrucciones se le llamó lenguaje ensamblador (o assembler). Posteriormente aparecieron diferentes lenguajes de programación, los cuales reciben su denominación porque tienen una estructura sintáctica similar a los lenguajes escritos por los humanos, denominados también lenguajes de alto nivel.

## Programación
La programación es el proceso de diseñar, escribir, probar, depurar y mantener el código fuente de programas computacionales. El código fuente es escrito en un lenguaje de programación. El propósito de la programación es crear programas que exhiban un comportamiento deseado. El proceso de escribir código requiere frecuentemente conocimientos en varias áreas distintas, además del dominio del lenguaje a utilizar, algoritmos especializados y lógica formal.
Para crear un programa, y que la computadora interprete y ejecute las instrucciones escritas en el,
debe usarse un Lenguaje de programación.
Como vimos, la computadora sólo entiende lenguaje de máquina, pero para nuestra facilidad y comodidad existen los lenguajes de alto nivel. Escribir un programa en un lenguaje de alto nivel es mucho más sencillo que estar escribiendo ceros y unos. Una vez que se termina de escribir un programa, sea en assembler o en un lenguaje de alto nivel, es necesario compilarlo. Compilar un programa es traducirlo a lenguaje de máquina; es decir, traducir
un programa de un lenguaje de alto nivel a un lenguaje de máquina.
La programación se rige por reglas y un conjunto más o menos reducido de órdenes, expresiones, instrucciones y comandos que tienden a asemejarse a una lengua natural acotada (en inglés); y que además tienen la particularidad de una reducida ambigüedad. Cuanto menos ambiguo es un lenguaje
de programación, se dice, es más potente. Bajo esta premisa, y en el extremo, el lenguaje más potente existente es el binario, con ambigüedad nula.

## Programas y Algorítmos
   Un algoritmo es una secuencia no ambigua, finita y ordenada de
instrucciones que han de seguirse para resolver un problema.
Un programa normalmente implementa (traduce a un lenguaje de
programación concreto) uno o más algoritmos. Un algoritmo puede
expresarse de distintas maneras: en forma gráfica, como un diagrama
de flujo, en forma de código como en pseudocódigo o un lenguaje de
programación, en forma explicativa, etc.
Los programas suelen subdividirse en partes menores, llamadas
módulos, de modo que la complejidad algorítmica de cada una de las
partes sea menor que la del programa completo, lo cual ayuda al
desarrollo del programa. Esta es una práctica muy utilizada y se
conoce como "refino progresivo".
Un programa está formado por algoritmos y estructuras de datos.
Características fundamentales
• Un algoritmo debe ser preciso e indicar el orden de realización de cada paso.
• Un algoritmo debe estar definido. Si se sigue un algoritmo dos veces, se debe obtener el mismo
resultado cada vez (ante la misma entrada de datos).
• Un algoritmo debe ser finito. Si se sigue un algoritmo, se debe terminar en algún momento, debe tener un número finito de pasos.
La definición de un algoritmo debe describir tres partes: Entrada, Proceso y Salida
• Datos de Entrada: un algoritmo tiene cero o más entradas, es decir cantidades que le son dadas
antes de que el algoritmo comience, o dinámicamente mientras el algoritmo corre.
• Procesamiento de Datos: aquí incluye operaciones aritmético-lógicas, selectivas y repetitivas; cuyo objetivo es obtener la solución del problema.
• Salida de Resultados: permite comunicar al exterior el resultado. Puede tener una o más salidas, es decir cantidades que tienen una relación única respecto a las entrantes

## Compilación
El programa escrito en un lenguaje de programación (fácilmente comprensible por el programador) es llamado programa fuente y no se puede ejecutar directamente en una computadora. La opción
más común es compilar el programa obteniendo un módulo objeto, aunque también puede ejecutarse en forma más directa a través de un intérprete informático.
El código fuente del programa se debe someter a un proceso de traducción para convertirlo en lenguaje máquina (que es único ejecutable por el procesador). A este proceso se le llama compilación.
Normalmente la creación de un programa ejecutable lleva dos pasos. El primer paso se llama compilación (propiamente dicho) y traduce el código fuente escrito en un lenguaje de programación almacenado en un archivo a código en bajo nivel (normalmente en código objeto, no directamente a
lenguaje máquina). El segundo paso se llama enlazado en el cual se enlaza el código de bajo nivel generado de todos los ficheros y subprogramas que se han mandado compilar y se añade el código de las funciones que hay en las bibliotecas del compilador para que el ejecutable pueda comunicarse
directamente con el sistema operativo, traduciendo así finalmente el código objeto a código máquina, y generando un módulo ejecutable.
Estos dos pasos se pueden hacer por separado, almacenando el resultado de la fase de compilación en archivos objetos; para enlazarlos en fases posteriores, o crear directamente el ejecutable; con lo
que la fase de compilación se almacena sólo temporalmente. Un programa podría tener partes escritas en varios lenguajes (por ejemplo C, C++ y ensamblador), que se podrían compilar de forma independiente y luego enlazar juntas para formar un único módulo ejecutable.
## Algunos Conceptos fundamentales
Procesador
Entidad capaz de entender una secuencia finita de acciones y ejecutarlas en la forma en que se especifican.
Código Fuente
El código fuente de un programa es el escrito por un programador en algún lenguaje de programación. Como vimos, en este primer estado no es directamente ejecutable por la computadora, sino que debe ser traducido a lenguaje de máquina. Para esta traducción se usan los llamados compiladores.
Código Objeto
En programación, se llama código objeto al código que resulta de la compilación del código fuente. Consiste en lenguaje de máquina y se distribuye en varios archivos que corresponden a cada código fuente compilado. Para obtener un programa ejecutable se han de enlazar
todos los archivos de código objeto con un programa llamado enlazador (linker).
Código Ejecutable
El código que es capaz de ejecutar un procesador


##Llevando estos conceptos a la práctica
Escribamos nuestro primer programa en lenguaje C, en un archivo llamado hola.c.
```c
#include <stdio.h>

int main() {
	printf("Hola <su-nombre>!");
	return 0;
}
```
Para generar el código objeto debemos tipear en la consola:
`gcc –c hola.c`
Esto genera el archivo hola.o. Este archivo no será ya más comprensible por nosotros. Para generar el código ejecutable a partir del código objeto:
`gcc -o hola hola.o`
Esto genera el archivo ejecutable hola. Para ejecutarlo en la computadora bastará con tipear:
`./hola`
Es posible realizar todos estos pasos automáticamente, es decir, generar un archivo ejecutable a partir de un archivo fuente (tener en cuenta que el proceso siempre generará todos los pasos anteriores, pero será transparente a nuestros ojos). Para esto:
`gcc –o hola hola.c`


##Preprocesador
El lenguaje C realiza un paso más a los recién vistos: antes de la compilación se realiza un preprocesamiento del archivo fuente. Esta tarea es realizada por el preprocesador y se utiliza para resolver características que permite realizar el lenguaje (inclusión de archivos, definición de constantes, compilación condicional, etc). Para ver el código fuente luego de ser preprocesado
debemos tipear en la consola:
`gcc -E hola.c`

##IDE
Un IDE es un entorno de desarrollo integrado (Integrated Development Environment) que permite desde un programa corriendo en el entorno gráfico, crear, editar, compilar y ejecutar programas desarrollados por nosotros.
Algunos IDEs son: CodeBlocks, Dev C++, Visual Studio y Visual Studio Community, C++ Builder o C++ Builder Community Edition, Eclipse, Netbeans, etc.

Para comenzar a escribir programas en lenguaje C tenga en cuenta:
• La indentación es muy importante para poder comprender mejor los programas escritos en C.
• C es sensible a mayúsculas y minúsculas, por lo tanto, a != A. Todas las palabras claves vistas son con minúsculas, while no es lo mismo que While.
• En C, todas las instrucciones finalizan con “;” (punto y coma). Notar que existen estructuras que no finalizan con “;”. Un ejemplo, es la condición de un while no finaliza con “;” ya que no es la finalización de una instrucción.
Todo programa escrito en C está en el contexto de una función principal, llamada main (principal en inglés). Entonces, todos los programas estarán en el contexto de esta función.
Variables: permiten almacenar datos en la computadora, para ser utilizados en un programa

##Variables, Ingreso de Datos por teclado, Impresión de Datos por pantalla
Declaración de variables: las variables deben ser declaradas al comienzo del programa, dentro de la función main(), precedidas por el tipo (int, float, char).

##Tipo de dato Int
Ejemplo: escriba un programa que lea un número entero ingresado por teclado, lo multiplique por dos, y luego lo muestre por pantalla:
```c
#include <stdio.h>
int main() {
	int x, mult;
	scanf("%d", &x);
	mult = x * 2;
	printf("%d * 2 = %d\n", x, mult);
	return 0;
}
```
• para números enteros usar variable int y leer/imprimir utilizando %d.

##Tipo de dato Float
Ejemplo: escriba un programa que lea una suma y una cantidad en números reales ingresado por
teclado, y luego calcule e imprima por pantalla el promedio:
```c
#include <stdio.h>
int main() {
	float promedio, suma, cantidad;

	scanf("%f", &suma);
	scanf("%f", &cantidad);
    promedio = suma / cantidad;
    printf("Suma: %f Cantidad %f Promedio: %f\n", suma, cantidad,
    promedio);
    return 0;
}

```
• para números reales usar float y leer/imprimir utilizando %f.

#Tipo de dato Char
Ejemplo: escriba un programa que pida al operador ingresar una letra, y luego imprima dicha letra:

```c
#include <stdio.h>
int main() {
	char letra;

    scanf(" %c", &letra); // notar el espacio entre la comilla y el %
    printf("Ud. Ingreso la letra: %c\n", letra);
    return 0;
}

```
##Expresiones aritméticas en lenguaje C
|  Operador | Nombre  |Ejemplo   |
| ------------ | ------------ | ------------ |
| +  | Suma  | a = b + 4|
| -  | Resta  | a = 3 – 4  |
| *  | Mult | a = b * c |
| /  | División  | a = 4 / b  |
| %  | Módulo (operación resto)   | a = numero % 2  |
| ++ |Incremento en 1    | a++  |
| - - | Decremento en 1  | a- -  |
|  += |Incremento en n   | a += 5  |
| -=  | Decremento en n  | a -= 5  |   

Hacer los ejercicios del práctico secciones:
• I- Estructuras secuenciales.
• Para algunos ejercicios es necesario entender la operación cast (a continuación),
que permite cambiar el tipo de una variable para realizar operaciones.

##Operación cast
El lenguaje C realiza las operaciones de acuerdo al tipo de datos de las variables involucradas. Asi, si las variables son enteras, entonces C realizará las operaciones utilizando enteros. Entendiendo esto, ¿qué valor dará a la variable c el siguiente fragmento de código?
int a = 5;
int b = 2;
float c = a / b;
Debido a que a y b son enteros, la operación es realizado utilizando aritmética de entero y por lo tanto a / b dará por resultado 2. Este valor será asignado luego a la variable c. Es decir, c = 2. Pero si en cambio alguna de las variables es real, C realiza la operación como aritmética real.
Entendiendo esto, ¿qué valor dará a la variable c el siguiente fragmento de código?
int a = 5;
float b = 2;
float c = a / b;
Debido a que b es real, la operación es realizado utilizando aritmética real y por lo tanto a / b dará por resultado 2,5 que es el valor esperado. Este valor será asignado luego a la variable c. Es decir, c = 2.5.
Resumiendo, C trata de resolver las operaciones de la forma más sencilla (enteros) a no ser que haya algún operando de algún tipo más complejo. Si lo hubiere, C realizará la operación en la aritmética del tipo más complejo.
Muchas veces tenemos variables enteras pero necesitamos asignar el resultado a una variable de tipo real (float o double). Para esto se utiliza la operación cast. Para que el primer fragmento de código asigne a c el valor correcto 2,5 pero manteniendo las variables enteras, se utiliza la operación
cast:
int a = 5;
int b = 2;
float c = (float)a / b;
La operación cast (en este caso es poner la palabra float a la izquierda de algún operando), lo que hace es convertir la variable a al tipo float antes de realizar la operación. El lenguaje C verificará que uno de los operando es de tipo entero pero el otro es de tipo float, por lo que la operación será realizada en tipo float. Otra posibilidad es usar la operación cast para pasar un resultado de punto flotante a entero. Esto es lo que hace el siguiente framento de código:
float a = 5.0;
float b = 2.0;
int c = (int)(a / b);
En este caso la operación se realizará con aritmética real, pero antes de asignar el valor a la variable c, el mismo será convertido a entero. De esta manera el valor 2,5 será convertido a su equivalente entero 2 y este valor será asignado a la variable c.

##Condicionales
Determinan la ejecución de una u otra parte del programa dependiendo de que se cumpla o no una condición.

##Condicional 
Si se cumple una determinada condición se ejecutará un conjunto de instrucciones (que en caso contrario no se ejecutarían).

```c
if (condicion) {
	instrucciones
 }

```
Donde:
- condición es cualquier expresión que devuelva un valor lógico (true/false).
- instrucciones es un bloque de una o más instrucciones que se ejecutarán solo en el caso de que se cumpla la condición. 

Ejemplo: escriba un programa que indique si un número ingresado por teclado es positivo.

```c
#include <stdio.h>
int main() {
    int a;

	printf("Ingrese un numero: ");
    scanf("%d", &a);
    if (a > 0) {
    	printf("El numero ingresado es positivo.\n");
    }
    return 0;
}
```

##Condicional si/sino
Si se cumple la condición se ejecutará el primer bloque de instrucciones, si no se cumple se ejecutará el segundo bloque.

```c
if (condicion) {
	instrucciones
 } else {
   instrucciones
 }
```
Ejemplo: escriba un programa que indique si un número ingresado por teclado es positivo no.

```c
#include <stdio.h>
int main() {
	int a;

	printf("Ingrese un numero: ");
   scanf("%d", &a);
   if (a > 0) {
       printf("El numero ingresado es positivo.\n");
     } else {
       printf("El numero ingresado no es positivo.\n");
 }
 return 0;
}

```
Modifique el ejercicio para indicar si es positivo, cero o negativo
Ejemplo: escriba un programa que, dada la edad de una persona, determine si es mayor o menor de edad.

```c
#include <stdio.h>
int main() {
	int edad;

	printf("Ingrese su edad: ");
    scanf("%d", &edad);
    if (edad < 18) {
    	printf("Ud. es menor de edad.\n");
      } else {
	  printf("Ud. Es mayor de edad.\n");
 }
 return 0;
}
```
Expresiones relacionales que se pueden utilizad para formar condiciones:

| Operador  | Nombre  | Ejemplo |
| ------------ | ------------ | ------------ |
| >  | mayor que  | if( a > b) {  |
| >=  | mayor o igual que   | if( a >= 10) {   |
| <  | menor que  | if( a + 3< b) {   |
| <=  | menor o igual que  | if( a <= b + 10) {   |
| ==  | igual   | if( a % 2== 0) {  |
| !=  | distinto | if( a != 0) {

Las condiciones se pueden combinar usando los operadores lógicos indicados a continuación.
Expresiones lógicas:

| Operador  | Nombre  | Ejemolo  |
| ------------ | ------------ | ------------ |
| &&  |y, conjunción(and)   | if( a < 10 && a > 0) {  |
| l l  | o, disyunción(or)  | if( a < 10  l l a > 20) {  |
| !  | no, negación(not)  | a = ! b  ||

##Conjunción Lógica o Producto Lógico (y, and): 
El operador correspondiente se representa mediante los símbolos '^' (propio de la Lógica Proposicional) 'AND' y '.' En el Lenguaje de Programación C se utiliza el símbolo '&&'.
El efecto de este Operador es la evaluación simultánea del Estado de Verdad de las variables lógicas involucradas.
Así tendremos, por ejemplo, que la expresión: P && Q, será Verdadera únicamente si P y Q lo son. Cualquier otro arreglo de Estados de Verdad para ambas variables, dará como resultado el
Valor Falso, puesto que basta con que una de la dos variables tenga valor Falso, para que ambas no sean simultáneamente Verdaderas.

|  Variables Lógicas |   |Resultado   |
| ------------ | ------------ | ------------ |
| P  |  Q | P && Q  |
| Verdadero  | Verdadero  |  Verdadero  |
| Verdadero  |  Falso  |  Falso  |
| Falso  |Verdadero   |  Falso  |
|  Falso |  Falso  |  Falso  ||


Ejemplo: escriba un programa que, dada la hora del día, indique si es horario matutino (de 5 a 11hs).

```c
#include <stdio.h>
int main() {
	int hora;

	printf("Ingrese la hora del dia: ");
    scanf("%d", &hora);
    if (hora >= 5 && hora <= 11) {
    	printf("Es horario matutino.\n");
	} else {
		printf("No es horario matutino.\n");
 }
 return 0;
}

```
##Disyunción Lógica Inclusiva o Suma Lógica (o, or):
El Operador correspondiente, se representa mediante los símbolos 'v' (propio de la Lógica Proposicional), 'OR' y '+' En el Lenguaje de Programación C se utiliza el símbolo '||'.
El efecto de este operador, es la evaluación no simultánea del Estado de Verdad de las variables lógicas involucradas. Esto implica que al tener Estado Verdadero por lo menos una de las variables afectadas, la operación dará un resultado verdadero.
Así tendremos que la expresión A || B será Falsa únicamente cuando el Estado de Verdad de ambas variables sea Falso. En cualquier otro caso, la operación será Verdadera.

|  Variables Lógicas |   |Resultado   |
| ------------ | ------------ | ------------ |
| P  |  Q | P && Q  |
| Verdadero  | Verdadero  |  Verdadero  |
| Verdadero  |  Falso  |  Verdadero  |
| Falso  |Verdadero   |  Verdadero  |
|  Falso |  Falso  |  Falso  ||

Ejemplo: escriba un programa que, dada la hora del día, indique si es horario nocturno (de 21 a 4 hs).

```c
#include <stdio.h>
int main() {
	int hora;

	printf("Ingrese la hora del dia: ");
    scanf("%d", &hora);
    if (hora >= 21 || hora <= 4) {
		printf("Es horario nocturno.\n");
 } else {
		printf("No es horario nocturno.\n");
 }
 return 0;
}

```
##Negación o Complemento Lógico (no, not):
Este Operador representado por un guión sobre la Variable a Complementar ejemplo Ᾱ y también la palabra ‘NOT’ al aplicarse a un predicado lógico (simple o compuesto) , devuelve el valor opuesto; es decir : si el predicado en cuestión es Falso ( valor lógico F), el resultado será Verdadero ( valor lógico T) y recíprocamente. En el Lenguaje de Programación C se utiliza el símbolo '!'.

|Variable Lógica   | Resultado  |
| ------------ | ------------ |
| P  | !P  |
| Verdadero  | Falso  |
| Falso  | Verdadero  | |

Hacer los ejercicios del práctico secciones:
• II- Condicionales
• III- Condicionales anidados y operadores lógicos


##Condicionales: uso de switch/case
La sentencia switch es un condicional que evalúa una expresión numérica entera y, de acuerdo a su valor, selecciona un bloque de instrucciones y los ejecuta.
```c
switch(expresión) {
	case valor:
		instrucciones
		break;
	case valor-2:
		instrucciones
		break;
 ...

	 default:
		instrucciones;
	    break;
}

```
De acuerdo al valor de x se elije el conjunto de instrucciones indicado por la sentencia case. Las sentencias involucradas son:
• switch( expresión ) evalúa la expresión y selecciona el caso correspondiente de acuerdo al valor obtenido
• case valor: indica el comienzo del bloque de instrucciones que se deben ejecutar si expresión es igual a valor
• break finaliza el bloque de instrucciones / termina la ejecución del switch
• default indica el comienzo del bloque de instrucciones que se deben ejecutar si el valor de la expresión no se corresponde con ningún caso
especificado

Ejemplo: escriba un programa que escriba en letras el número ingresado por teclado. El número debe ser 0, 1 o 2.

```c
#include <stdio.h>
int main() {
	int numero;
    printf("Ingrese un numero: ");
	scanf("%d", &numero);
	switch(numero) {
    	case 0:
    		printf("cero\n");
	    	break;
		case 1:
 			printf("uno\n");
 			break;
		case 2:
            printf("dos\n");
            break;
        default:
			printf("Numero invalido\n");
			break;
	}
 return 0;
}
```
Hacer los ejercicios del práctico 1 secciones:
• IV- Sentencias de decisión y switch

##Estructuras repetitivas (ciclos)
En ocasiones necesitaremos que un bloque de instrucciones se ejecute varias veces seguidas; en estos casos utilizaremos estructuras repetitivas o bucles:
• estructura for (para)
• estructura while (mientras)
• estructura do … while (hacer … mientras)
Supongamos un ejercicio donde tengamos que escribir los números del 1 al 5. La solución es bastante sencilla teniendo en cuenta las instrucciones que ya hemos aprendido:
```c
#include <stdio.h>
int main() {
	printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    return 0;
}

```
Pero qué sucedería si tuviéramos que imprimir los los números del 1 al 100, o al 10 mil, o al 100 mil. Claramente la solución propuesta no escala. Es por esto que en los lenguajes de programación existen los ciclos.

##Ciclo for (para)
La estructura for ejecuta un bucle un número determinado de veces controlando automáticamente el número de iteraciones. La utilizaremos siempre que sepamos previamente el número de veces que se ejecutará el bucle. Su formato genérico es el siguiente:

```c
for (i=0; i <= 10; i++) {
	instrucciones
}

```
Donde:
- i: es una variable interna que se utiliza normalmente como contador del numero de ejecuciones del bucle en cada momento.
- 0: es el valor inicial que tomará la i.
- i < 10: es una condición que será comprobada antes de realizar cada ejecución del bucle. Si se cumple, se ejecutará el bloque de instrucciones; en caso contrario pasará el control a la línea siguiente al final de la estructura.
- i++: es una expresión que modificará el valor de la variable de control. Normalmente se trata de un valor positivo o negativo.

Ejemplo: escriba un programa que muestre los números entre 0 y 10
```c
#include <stdio.h>
int main() {
	int i;

	printf("Los números entre 0 y 10 son:");
    for (i=0; i <= 10; i++) {
    	printf("\t%d", i);
    }
	printf("\n");
    return 0;
}

```
Ejemplo: escriba un programa que muestre los números pares entre 2 y 100

```c
#include <stdio.h>
int main() {
	int i;

	printf("Los números pares entre 2 y 100 son:");
    for (i=2; i <= 100; i += 2) {
    	printf("\t%d", i);
    }
	printf("\n");
    return 0;
}
```
Ejemplo: escriba un programa que muestre los números del 10 al uno
```c
int main() {
	int i;

	printf("Los números entre el 10 y el 1 son:");
    for (i=10; i > 0; i--) {
    	printf("\t%d", i);
    }
    printf("\n");
    return 0;
}
```
Hacer los ejercicios del práctico secciones:
• V- Ciclo de repetición exacto (for)
• VI- Contadores, acumuladores, mínimos y máximos

##Contadores, acumuladores, mínimos y máximos
Contadores
Utilizamos los contadores para contar elementos. Los contadores no son más que variables generalmente enteras (int) y se las suele ir incrementado de uno en uno para contar. La forma de incrementar una variable usada como contador es:
```c
int contador; /* declara una variable llamada contador */
...
contador = 0; /* siempre inicializar contadores en 0 antes de usarlos */
...
contador = contador + 1; /* incrementa contador en 1 */
```
o bien, de la siguiente forma (ambas son idénticas);
```c
int contador; /* declara una variable llamada contador */
...
contador = 0; /* siempre inicializar contadores en 0 antes de usarlos */
...
contador++; /* incrementa contador en 1 */
```
Entonces, las reglas para usar contadores son:
1. Declarar la variable para ser usada como un contador como entero.
2. Inicializar dicha variable en 0 antes de utilizarla por primera vez.
3. Incrementar en uno la variable cada vez que nos interese contar un elemento
4. Mostrar el resultado de la variable usada como contador.

Ejemplo: indicar cuantos ratones pesan más de 250 gramos, dado un conjunto de 5 ratones

```c
#include <stdio.h>
#define CANTIDAD_RATONES 5
int main() {
	int i, contador, peso;
    contador = 0;
    for(i = 0; i < CANTIDAD_RATONES; i++) {
		printf("Ingrese el peso del raton (gramos): ");
        scanf("%d", &peso);
		if(peso > 250) {
        	contador = contador + 1;
        }
	}
	printf("La cantidad de ratones de mas de 250 gramos es: %d\n\n", contador);
    return 0;
}
```

##Acumuladores
Utilizamos los acumuladores para sumar (acumular) algún atributo de un elemento. Los acumuladores no son más que variables, enteras (int) o reales (float) dependiendo de lo que se quiera acumular (ambas deben ser del mismo tipo). Se les debe ir sumando el valor del atributo del elemento en cuestión:
```c
int acumulador; /* declara una variable llamada contador */
...
acumulador = 0; /* siempre inicializar en 0 antes de usarlos */
...
acumulador = acumulador + atributoParaAcumular; /* suma o acumula */
```
o bien, de la siguiente forma (ambas son idénticas);
```c
int acumulador, atributoParaAcumular; /* variables*/
...
acumulador = 0; /* siempre inicializar en 0 antes de usarlos */
...
acumulador += atributoParaAcumular; /* suma o acumula */
```
Entonces, las reglas para usar contadores son:
1. Declarar la variable para ser usada como un acumulador, y otra para contener el atributo del
elemento a acumular. Ambas del mismo tipo.
2. Inicializar el acumulador en 0 antes de utilizarla por primera vez.
3. Sumar al acumulador la variable que contiene el atributo a acumular
4. Mostrar el resultado de la variable usada como acumulador.

Ejemplo: indicar el peso total de los ratones que pesan más de 250 gramos, dado un conjunto de 5 ratones. Nota: En este caso el atributo a acumular es el peso, y como se ingresa en gramos la vamos a usar como entero

```c
#include <stdio.h>
#define CANTIDAD_RATONES 5
int main() {
	int i, acumulador, peso;
    acumulador = 0;
    for(i = 0; i < CANTIDAD_RATONES; i++) {
    	printf("Ingrese el peso del raton (gramos): ");
        scanf("%d", &peso);
        if(peso > 250) {
        	acumulador = acumulador + peso;
        }
     }
	printf("El peso total de los ratones de mas de 250 gramos es: %d\n\n
", acumulador);
 return 0;
}
```
##Mínimos
Utilizamos los mínimos para obtener el valor mínimo a partir de un conjunto de valores. Los acumuladores no son más que variables, enteras (int) o reales (float) dependiendo del valor contra el que se esté comparando (ambas deben ser del mismo tipo). Se las debe ir comparando uno a uno con cada elemento del conjunto, determinando en cada paso el valor mínimo. La forma de obtener un mínimo es:
```c
int minimo; /* variable donde se almacenará el valor mínimo */
...
minimo = 999999; /* siempre inicializar el mínimo con un valor grande */
...
if (valor < minimo) { /* en un ciclo, obtiene valor mínimo */
 minimo = valor;
}

```
Entonces, las reglas para usar contadores son:
1. Declarar la variable para ser usada como mínimo, y otra para ir leyendo el valor a evaluar.
Ambas del mismo tipo.
2. Inicializar dicha variable en un valor más grande que cualquier valor posible (en nuestro
curso, 9999999) antes de utilizarla por primera vez.
3. Dentro del ciclo que recorre los valores, comparar el mínimo con el valor, y actualizarlo si
corresponde
4. Mostrar el resultado de la variable usada para obtener el mínimo.

Ejemplo: indicar el peso mínimo de un conjunto de 5 ratones
```c
#include <stdio.h>
#define CANTIDAD_RATONES 5
int main() {
	int i, pesoMinimo, peso;
    pesoMinimo = 999999;
    for(i = 0; i < CANTIDAD_RATONES; i++) {
    	printf("Ingrese el peso del raton (gramos): ");
        scanf("%d", &peso);
        if(peso < pesoMinimo) {
        	pesoMinimo = peso;
        }
    }
	printf("El ratón mas liviano pesa: %d\n\n", pesoMinimo);
	return 0;
}
```
##Máximos
Utilizamos los máximos para obtener el valor máximo a partir de un conjunto de valores. Los máximos no son más que variables, enteras (int) o reales (float) dependiendo del valor contra el que se esté comparando (ambas deben ser del mismo tipo). Se las debe ir comparando uno a uno con
cada elemento del conjunto, determinando en cada paso el valor máximo. La forma de obtener un mínimo es:
```c
int maximo; /* variable donde se almacenará el valor máximo */
...
maximo = -999999; /* siempre inicializar máximo con un valor pequeño */
...
if (valor > maximo) { /* en un ciclo, obtiene valor máximo */
 maximo = valor;
}
```

Entonces, las reglas para usar contadores son:
1. Declarar la variable para ser usada como máximo, y otra para ir leyendo el valor a evaluar. Ambas del mismo tipo.
2. Inicializar dicha variable en un valor más grande que cualquier valor posible (en nuestro curso, 9999999) antes de utilizarla por primera vez.
3. Dentro del ciclo que recorre los valores, comparar el máximo con el valor, y actualizarlo si corresponde
4. Mostrar el resultado de la variable usada para obtener el máximo.

Ejemplo: indicar el peso máximo de un conjunto de 5 ratones.

```c
#include <stdio.h>
#define CANTIDAD_RATONES 5
int main() {
	int i, pesoMaximo, peso;
    pesoMaximo = -999999;
    for(i = 0; i < CANTIDAD_RATONES; i++) {
    	printf("Ingrese el peso del raton (gramos): ");
        scanf("%d", &peso);
        if(peso > pesoMaximo) {
        	pesoMaximo = peso;
        }
    }
	printf("El ratón mas pesado pesa: %d\n\n", pesoMaximo);
 	return 0;
}
```

##Ciclo while (mientras)
La estructura while ejecuta un bloque de instrucciones y repite dicha ejecución mientras que se cumpla una condición.
```c
while (condición) {
	instrucciones
}

```
Donde:
- condición es la condición cuyo valor deberá ser true para que se produzca la entrada
en el bucle y que será comprobado antes de cada nueva ejecución del bloque de
instrucciones.
- instrucciones es el bloque de instrucciones que se ejecutará mientras que la
condición sea verdadera.
Funcionamiento:
1. Al encontrar la estructura while lo primero que hace (antes de entrar por primera vez en el bucle) es evaluar la condición: si es verdadera entra en el bucle y ejecuta el bloque de instrucciones, pero si es falsa ni siquiera llegará a entrar en el bucle.
2. Una vez ejecutadas las instrucciones del bucle se evalúa de nuevo la condición para determinar si se vuelve a ejecutar el bloque o no (si es verdadera se ejecuta, si es falsa deja de ejecutarse). Este punto se repite hasta que la condición deja de ser verdadera.
3. Cuando al evaluar la condición el resultado es false, el flujo del programa va a la línea siguiente al final del bucle.
Observaciones: Debemos asegurarnos de que en algún momento se produzca la salida del bucle ya que de lo contrario estaríamos ante un bucle sin fin (bucle infinito). Por ejemplo, si en lugar de la condición while (nota < 0 || nota > 10) hubiésemos escrito: while (nota < 0 && nota > 10)
el bucle hubiese estado iterando constantemente y no finalizaría nunca.
Ejemplo: escriba un programa que sume números ingresados por teclado hasta que el número ingresado sea cero

```c
#include <stdio.h>
int main() {
	int total, dato;

	total = 0;
    scanf("%d", dato);
    while (dato > 0) {
    	total = total + dato;
        scanf("%d", dato);
    }
    printf("La suma de los nros ingresados es: %d", total);
    return 0;
}
```
##Ciclo do/while (hacer/mientras)
La estructura do..while es similar a la anterior pero en este caso la comprobación se produce después de ejecutar el bloque de instrucciones.
```c
 do {
	 instrucciones;
    } while (condición);
```
Ejemplo: escriba un programa que sume números ingresados por teclado y que pida al usuario la opción de continuar o finalizar luego de cada numero ingresado. Con lo que hemos visto hasta ahora una solución posible es utilizar el ciclo while:
```c
#include <stdio.h>
int main() {
	int suma, nro, continuar;

	suma = 0;
    continuar = 1; /* para ingresar al ciclo la 1era vez */
    while (continuar) {
    	printf("Ingrese un nro: ");
 		scanf("%d", &nro);
	    suma = suma + nro;
        printf("Continuar? 1=SI, otro=NO: ");
        scanf("%d", &nro);
      } while (continuar == 1);
	printf("La suma es %d\n", suma);
    return 0;
}

```
También es posible utilizar el ciclo do..while
```c
#include <stdio.h>
int main() {
	int suma, nro, continuar;

	suma = 0;
    do {
    	printf("Ingrese un nro: ");
        scanf("%d", &nro);
 		suma = suma + nro;
 		printf("Continuar? 1=SI, otro=NO: ");
 		scanf("%d", &continuar);
     }  while (continuar == 1);
	printf("La suma es %d\n", suma);
    return 0;
}

```
La única diferencia entre el ciclo while y el ciclo do..while está en la primera vez que se ejecuta el bucle:
• la estructura while comprueba la condición antes de entrar por primera vez en el bucle y si la condición no se cumple, no entrará.
• la estructura do..while ejecuta el bucle la primera vez sin comprobar la condición. Para las demás iteraciones el funcionamiento es idéntico en ambas estructuras (únicamente se producen variaciones en el caso de utilizar la cláusula continue).

##¡Un ejercicio, múltiples soluciones

Intente hallar diferentes soluciones para el siguiente ejercicio: acumular números hasta que el usuario ingrese el número 999.

Solución 1: solicitando dos veces el ingreso del número, antes del while y dentro del while
```c
#include <stdio.h>
int main() {
	int numero, suma;
    suma = 0;
    printf("Ingrese numero: ");
    scanf("%d", &numero);
    while (numero != 999) {
    	suma += numero;
        printf("Ingrese numero: ");
        scanf("%d", &numero);
	}
	printf("La suma de todos sus numeros es: %d\n\n", suma);
    return 0;
}

```
Solución 2: usando ciclo while e inicializando variables, pero teniendo cuidado de no sumar el valor 999 que indica salir.
```c
#include <stdio.h>
int main() {
	int numero, suma;
    suma = 0;
    numero = 0; /* inicializar con un valor para ingresar al ciclo */
    while (numero != 999) {
    	printf("Ingrese numero: ");
        scanf("%d", &numero);
        if(numero != 999) {
        	suma += numero;
        }
   }
	printf("La suma de todos sus numeros es: %d\n\n", suma);
	return 0;
```

Solución 3: inicializando con un valor neutro para evitar el doble pedido de ingreso de datos de la solución 1.
```c
#include <stdio.h>
int main() {
	int numero, suma;
    suma = 0;
    numero = 0; /* valor neutro para sumar y permite ingresar al ciclo */
    while (numero != 999) {
    	suma += numero;
        printf("Ingrese numero: ");
        scanf("%d", &numero);
     }
	printf("La suma de todos sus numeros es: %d\n\n", suma);
    return 0;
}

```

Solución 4: utilizando el ciclo do..while.
```c
#include <stdio.h>
int main(){
	int numero, suma;
	suma = 0;
    numero = 0;
    do {
    	suma += numero;
        printf("Ingrese numero: ");
        scanf("%d", &numero);
     }  while (numero != 999);
        	printf("La suma de todos sus numeros es: %d\n\n", suma);
	return 0;
}
```

Note que las últimas dos soluciones son las más claras ya que no es necesario tratar casos especiales como en las primeras dos soluciones. Sin embargo, si modificamos el ejercicio de manera que el
número a ingresar para finalizar sea 0 (cero), entonces la única solución válida es la última (ciclo do..while). Pruébelo modificando las últimas dos soluciones.
Hacer los ejercicios del práctico secciones:
• VII- Ciclo de repetición no exacto o condicional (while)


##Variables y Constantes
Un identificador es una Variable, cuando su valor puede modificarse y además posee un Nombre que lo identifica y un Tipo que describe su uso.
Un identificador es una Constante, cuando su valor no puede modificarse y además posee un Nombre que lo identifica y un Tipo que describe su uso.
Cuando definimos una Variable, estamos creando un objeto para el Procesador. La diferencia respecto de la definición de una constante, es que en el momento de su creación, el valor del objeto es desconocido, mientras que para una constante no solamente es conocido sino que permanece inalterado durante la ejecución del procedimiento resolvente. Las variables son palabras en el código, que al ejecutar el programa toman valores concretos.
Nombres de las variables: sólo están permitidas letras de la 'a' a la 'z' (la ñ no se incluye), números y el símbolo '_'. Las variables no pueden comenzar con un número.

Tampoco es posible utilizar como nombres de variables las palabras reservadas que usa el compilador. Por ejemplo: for, main, do, while, etc.
El lenguaje C distingue mayúsculas y minúsculas. Por lo tanto, las siguientes son variables diferentes:
Nombre
nombre
NOMBRE
Por convención, las variables se escriben siempre en minúsculas (pueden tener alguna mayúscula si hace falata), y las constantes se escriben siempre enmayúsculas (y no pueden tener minúsculas).


##Alcance de una variable
Tenemos dos posibilidades respecto del alcance de una variable:
• declarar una variable como global
• declarar una variable como local
Es global aquella variable que se declara fuera de las funciones (main es una función) y local la que se declara dentro de alguna:


```c
// Variable Global
#include <stdio.h>
int x;
int main(){
 …
}
```

```
//Variable Local
#include <stdio.h>
int main(){
 int x;
 …
}
```
Las variables globales se pueden usar en cualquier función y las locales sólo pueden usarse en la
función en el que se declaran. Es buena costumbre usar variables locales en vez de globales. Podemos declarar más de una variable en una sola línea:
int x, y;
Nota: el uso de variables globales quedará más claro al ver Funciones. Por ahora utilizaremos variables locales.

##Constantes
Las constantes se declaran igual que una variable normal, pero añadiendo la palabra const
delante. Esta forma de definir constantes está disponible desde el standard C99 en adelante. Por ejemplo, para declarar una constante con valor 14 y de tipo entero:
const int NUMERO = 14;
Esta constante no puede ser modificada a lo largo del programa. Por eso deben ser definidas al mismo tiempo que declaradas.
Otra forma utilizada es definir constantes al comienzo del programa utilizando la directiva `#define`. Esta forma de definir constantes hace uso del preprocesador de C, que está disponible desde las primeras versiones del lenguaje y aún continúa vigente. Por ejemplo:
`#define PI 3.141592`

#Tipos de Datos
El lenguaje de programación C proporciona un conjunto fijo de Tipos de Datos, llamados Datos Primitivos o Básicos. Cada Tipo de Dato Primitivo o Básico, define el conjunto de valores que puede asumir una variable. De aquí se desprende que el Tipo de Dato, fija el conjunto de Operaciones aplicables a todos los Datos de su Clase.
Los Tipos de Datos Básicos que manejan la mayoría de los Procesadores son:
Tipo NUMERICO
Tipo LOGICO
Tipo CARACTER


Estos Tipos se aplican tanto a las Variables como a las Constantes, pero debe observarse que una variable de un determinado Tipo, sólo puede tomar como valor una constante del mismo Tipo.
Tipo Numérico 
  Básicamente se distinguen dos Subtipos:
  Tipo Numérico Entero.
  Tipo Numérico Real.

Los Datos Numéricos Enteros, deberán siempre estar comprendidos entre los valores mínimoy máximo que cada computador establezca.

Los Datos Numéricos Reales, tendrán en general dos formas de representación: apelando a un punto decimal que separe la mantisa de la parte entera, o bien según la notación científica, utilizable para expresar números muy grandes o muy chicos. Esto entraña a dos maneras de considerar a las expresiones decimales de los números Reales: Notación
Científica o Exponencial, y Coma o Punto Flotante, en la cual se fija la cantidad de dígitos significativos (sin considerar ceros a izquierda). En realidad, la notación de punto flotante, es un tipo de notación científica en un formato particular, denominado normalizado en base 2
(dos). No se hará incapié aquí sobre estos mecanismos de representación, ya que se supone que el lector está familiarizado con ellos. En cuanto a la representación interna de números reales dentro de un ordenador, dada su complejidad respecto de la representación de números enteros, se hará alguna referencia más adelante.

Tipo Lógico
A este Tipo de Dato, se lo suele llamar también Tipo Booleano, en honor al matemático inglés George Boole, quien creó un Algebra para el tratamiento de los mismos. Por tal razón muchas veces se presentará a tales variables bajo la denominación de Variables Booleanas. La principal característica que posee este Tipo, es que su valor no es cuantitativo, sino cualitativo. Además mientras que una variable del tipo numérico puede asumir un gran
conjunto de valores (idealmente infinitos) como contenido, una variable Booleana, es binaria y por consiguiente podrá asumir dos valores solamente : Verdadero (True) o Falso (False). De este dominio impuesto para el Tipo en estudio, se explica su caracter cualitativo. Estas variables permiten describir Estados del Ambiente mediante un enunciado implícito en las mismas que puede resultar verdadero o falso, dependiendo del instante de la observación. Las operaciones posibles de definir entre ellas así como también sus aplicaciones serán luego
estudiadas detalladamente.

Tipo Caracter
Involucran a un conjunto ordenado y finito de símbolos que el procesador puede reconocer. Si bien no existe un conjunto estandar, podemos decir que dicho conjunto está básicamente
integrado por:
1) Letras mayúsculas (desde la A hasta la Z), sin incluir la CH y la LL (eventualmente puede no
ser incluida la Ñ).
2) Letras minúsculas (desde la a hasta la z), con las mismas restricciones que para las
mayúsculas.
3) Dígitos (del 0 al 9).
4) Caracteres especiales. Están incluidos aquí símbolos tales como:
*,+,-,:,;,,,",/,<,>,=,|,\,~,@,#,$,.,%,^,&,(,),{,},[,],`,!,?,' y otros. El espacio en blanco, también
puede ser considerado como un caracter.


## Unidades de Medida de la Información

Bit Dígito binario. Es el elemento más pequeño de información del ordenador. Un bit es un único dígito en un número binario (0 o 1). Los grupos forman unidades más grandes de datos en los sistemas de ordenador – siendo el Byte (ocho Bits) el más conocido de éstos.
Byte Se describe como la unidad básica de almacenamiento de información, generalmente equivalente a 8 bits. En español, a veces se le llama octeto. Cada byte puede representar, por ejemplo, una letra.
Kilobyte Equivale a 1.024 bytes (210). Se trata de una unidad de medida común para la capacidad de memoria o almacenamiento de las computadoras. Se lo abrevia kb.
Megabyte Equivale a 1.024 Kilobytes o a 1.048.576 (220) bytes. También se conoce como "Mega". Se lo abrevia MB.
Gigabyte Equivale a 1.024 Megabytes o a 1.073.741.824 (230) bytes. Es la unidad de medida más utilizada en los discos duros. También se conoce como "Giga". Se lo abrevia GB.
Terabyte Equivale a 1.024 Gigabytes o 240 bytes. También se conoce como "Tera". Se lo abrevia TB.

#Unidad III – Bibliotecas y Arreglos

# Uso de biblotecas
El lenguaje C ofrece, además de las sentencias que ya vimos, agregar nuevos conjuntos de sentencias a las que llamamos funciones. Estas nuevas funciones las agregamos en nuestro programa para poder utilizarlas utilizando la directiva #include. ¿Resulta conocido?
```c
#include <stdio.h>
```
La directiva anterior incluye la biblioteca stdio.h (standard input/output) y nos da, entre otras cosas, algunas funciones que ya vimos y estuvimos usando:
printf
scanf
El lenguaje C ofrece una lista extensa de funciones para realizar diversas operaciones. Estas funciones están agrupadas en bibliotecas. Para ver la lista de bibliotecas y las funciones que ofrecen ver:
http://www.cplusplus.com/reference/clibrary/

Al finalizar esta Unidad el alumno debe poder utilizar el listado de funciones indicado a continuación. Muchas de estas funciones las veremos en esta Unidad, y otras quedarán para que el alumno las vea en el link indicado anteriormente.

**stdio.h**
scanf
printf

**ctype.h**
isblank
isspace
isupper
islower
isalpha
isdigit
isxdigit
isalnum
ispunct
isgraph
isprint

**stdlib.h**
int rand ();
void srand(int seed);
int abs (int n);
double atof (char *s);
int atoi (char *s);

**math.h**
double pow(double a, double n);
double sqrt(double n);
double exp(double n);
double log(double n);
double log10(double n);
double fabs(double n);
double ceil(double n);
double floor(double n);
double sin(double n);
double cos(double n);
double tan(double n);
double acos(double n);
double asin(double n);
double atan(double n);
double sinh(double n);
double cosh(double n);
double tanh(double n);
double asinh(double n);
double acosh(double n);
double atanh(double n);

**string.h**
int strlen(char cadena[])
int strcpy(char destino[], char origen[])
int strcnpy(char destino[], char origen[], int n)
int strcat(char destino[], char origen[])
int strncat(char destino[], char origen[], int n)
int strcmp(char cadena1[], char cadena2[])
int strncmp(char cadena1[], char cadena2[], int n)
int strupr(char cadena)
int strlwr(char cadena)
int atoi(char cadena[])
double atof(char cadena[])

## Generación de Números Aleatorios
Para la generación de números aleatorios utilizamos la biblioteca stdlib.h y time.h. Algunas de las funciones que ofrece stdlib.h son:

• int rand (); retorna un número al azar entre 0 y la constante RAND_MAX
• void srand(int seed); inicializa el generador de números aleatorios
• int abs (int n); retorna el valor absoluto de n (entero)
• long labs(long n); retorna el valor absoluto de n (long)
• double atof (char *s); convierte la cadena s a un número real double
• int atoi (char *s); convierte la cadena s a un número entero int
• long atol (char* s); convierte la cadena s a un número entero long

Ejemplo: mostrar números al azar entre 0 y un número muy grande RAND_MAX.

```c
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
    printf("Numeros al azar:\n");
    for(i = 0; i < 10; i++){
    	printf("%d ", rand());
	}
	return 0;
}

```
Ejemplo: mostrar números al azar entre 0 y un número muy grande RAND_MAX pero que no se repitan entre distintas ejecuciones del mismo programa.
```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int i;
    srand(time(NULL));
    printf("Numeros al azar:\n");
    for(i = 0; i < 10; i++){
    	printf("%d ", rand());
	}
	return 0;
}
```

Ejemplo: imprimir números al azar entre 0 y 9, entre 1 y 10 y entre 20 y 30:
```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int i;
    srand(time(NULL));
    printf("Numeros al azar entre 0 y 9\n");
    for(i = 0; i < 40; i++){
    	printf("%d ", rand() % 10);
	}
	printf("\n\nNumeros al azar entre 1 y 10\n");
    for(i = 0; i < 40; i++){
    	printf("%d ", rand() % 10 + 1);
    }
	printf("\n\nNumeros al azar entre 20 y 30\n");
    for(i = 0; i < 40; i++){
    	printf("%d ", rand() % 11 + 20);
    }
	return 0;
}
```

## Operaciones Matemáticas
El lenguaje C ofrece diversas funciones para el cálculo matemático en la biblioteca math.h. Algunas de estas son:

• double pow(double a, double n); retorna la potencia de a elevado a la n
• double sqrt(double n); retorna la raíz cuadrada de n
• double exp(double n); retorna el exponencial de n (e eleveado a la n)
• double log(double n); retorna el logaritmo natural de n
• double log10(double n); retorna el logaritmo en base 10 de n
• double fabs(double n); retorna el valor absoluto de n
• double ceil(double n); retorna el entero siguiente a n
• double floor(double n); retorna el entero anterior a n
• double sin(double n); retorna el seno de n
• double cos(double n); retorna el coseno de n
• double tan(double n); retorna la tangente de n
• double acos(double n); retorna el arco coseno de n
• double asin(double n); retorna el arco seno de n
• double atan(double n); retorna el arco tangente de n
• double sinh(double n); retorna el seno hiperbólico de n
• double cosh(double n); retorna el coseno hiperbólico de n
• double tanh(double n); retorna la tangente hiperbólica de n
• double asinh(double n); retorna el arco seno hiperbólico de n
• double acosh(double n); retorna el arco coseno hiperbólico de n
• double atanh(double n); retorna el arco tangente hiperbólico de n

Esta biblioteca también define varias constantes matemáticas. Para utilizarlas es necesario predefinir a constante:

```c
#define _USE_MATH_DEFINES

```
Algunas de estas constantes son:
• M_E la base del logaritmo natural (e)
• M_LOG2E el logaritmo en base 2 del número e
• M_LOG10E el logaritmo en base 10 del número e
• M_LN2 el logaritmo natural del número 2
• M_LN10 el logaritmo natural del número 10
• M_PI el número PI
• M_PI_2 el número PI / 2
• M_PI_4 el número PI / 4
• M_1_PI el número 1 / PI
• M_2_PI el número 2 / PI
• M_SQRT2 el número raíz cuadrada de 2
• M_SQRT1_2 el número raíz cuadrada de 1/2.


Ejemplo: escriba un programa que calcule la hipotenusa de un triángulo rectángulo dados sus dos catetos:

```c
#include <stdio.h>
#include <math.h>
int main(){
	float hipotenusa, cateto1, cateto2;
    printf("Ingrese el primer cateto: ");
    scanf("%f", &cateto1);
    printf("Ingrese el segundo cateto: ");
    scanf("%f", &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("La hipotenusa es: %.2f", hipotenusa);
    return 0;
}

```
Ejemplo: escriba un programa que escriba los valores seno(x) y coseno(x) para valores de x entre 0 y PI, con incrementos de 0,25.

```c
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main(){
	float x;
    float seno, coseno;
    for(x = 0; x < M_PI; x += 0.25){
    	seno = sin(x);
		coseno = cos(x);
		printf("%.2f:\t%.2f\t%.2f\n", x, seno, coseno);
	}
	return 0;
}

```
Hacer los ejercicios del práctico secciones:
• I- Uso de math.

## Vectores

¿Como haríamos un programa que pida al usuario 2 números enteros y luego los muestre en el orden inverso al ingresado? Una posibilidad sería:

```c
#include <stdio.h>
int main(){
	int a, b;
    printf("Ingrese 2 numeros: ");
    scanf("%d %d", &a, &b);
    printf("%d %d\n", b, a);
    return 0;
}
```

¿Y si ahora en vez de dos números queremos que el usuario pueda ingresar 10 números? Lo solucionaríamos con 10 variables. ¿Y si fueran 100 números? Esta solución vemos que se torna inviable.

Para poder almacenar muchas variables del mismo tipo utilizando un único nombre de variable existen los vectores. Estas variables están en la computadora de forma contigua, una al lado de la otra.

Para declarar un vector de 5 variables enteras: int a[5];
Para declarar un vector de 4 variables reales: float b[4];

La variable a tiene internamente espacio para cinco variables, siendo la primera a[0], la segunda a[1], y la última a[4]. En estas cinco variables se pueden guardar números enteros (int).
La variable b tiene internamente espacio para cuatro variables, siendo la primera b[0], la segunda b[1], y la última b[3]. En estas cuatro variables se pueden guardar números reales (float).

## Vectores: acceso a variables
Para asignar un número a un vector, utilizamos el nombre de la variable (nombre del vector) y elíndice al que queremos acceder. Por ejemplo, para guardar el valor 1 al primer elemento del vector y el valor 2 al segundo:
a[0] = 1;
a[1] = 2;
Para leer el cuarto elemento de un vector y almacenarlo en x (siendo x otra variable int):
x = a[3];

Para sumar los primeros 2 elementos y guardarlos en la variable x:
x = a[0] + a[1];

Ahora que sabemos trabajar con vectores, podemos resolver el ejercicio propuesto inicialmente (para simplificar el ingreso de datos usaremos 5 elementos únicamente).

```c
#include <stdio.h>
#define N 5
int main(){
	int a[N];
	 int i;
 /* Inicializo vector. */
	for(i = 0; i < N; i++){
		printf("Ingrese un numero: ");
        scanf("%d", &a[i]);
	}
 /* Muestro vector al inverso. */
	printf("Al inverso: ");
    for(i = N - 1; i >= 0; i--){
    	printf("%d ", a[i]);
	}
	printf("\n\n");
    return 0;
}
```
Y podemos modificar el ejercicio para inicializar un vector de 20 elementos con números al azar entre 0 y 9, y mostrarlos en el orden en que aparecieron y en el orden inverso:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int main(){
	int a[N];
    int i;
 /* Inicializo generador de números aleatorios. */
	srand(time(NULL));
 /* Inicializo vector con nros al azar entre 0 y 9. */
	for(i = 0; i < N; i++){
    	a[i] = rand() % 10;
	}
 /* Muestro el vector original. */
	printf("Al original:\n");
    for(i = 0; i < N; i++){
    	printf("%d ", a[i]);
    }
 /* Muestro el vector al inverso. */
	printf("\n\nAl inverso:\n");
    for(i = N - 1; i >= 0; i--){
    	printf("%d ", a[i]);
    }
	printf("\n\n");
 	return 0;
}
```

## Vectores: inicialización
Antes de utilizar un vector es necesario inicializarlo. Esta inicialización consiste en asignar a cada posición del vector los valores iniciales.

Hay dos maneras de inicializar un vector:
• De forma dinámica
• De forma estática

Diremos que un vector se inicializa de forma estática cuando en el programa, en el momento de declarar un vector, se especifican sus valores. Por el contrario, diremos que un vector se inicializa de forma dinámica cuando el vector toma sus primeros valores en el momento en que se ejecuta el programa (en contraposición a cuando se declara).

## Vectores: inicialización dinámica
El siguiente fragmento de código inicializa un vector dinámicamente con todos sus valores en cero.
```c
int main(){
	int vec[N];
    int i;
    for( i = 0; i < N; i++){
    	vec[i] = 0;
    }

```
El siguiente fragmento de código inicializa un vector dinámicamente con números consecutivos comenzando de 0 (0, 1, 2, …):
```c
int main(){
	int vec[N];
    int i;
    for( i = 0; i < N; i++){
    	vec[i] = i;
	}

```
El siguiente fragmento de código inicializa un vector dinámicamente con números consecutivos comenzando de 1 (1, 2, 3, …):

```c
int main(){
	int vec[N];
    int i;
    for( i = 0; i < N; i++){
    	vec[i] = i + 1;
    }
```
El siguiente fragmento de código inicializa un vector dinámicamente con números pares
consecutivos:
```c
int main(){
	int vec[N];
    int i;
   for( i = 0; i < N; i++){
   vec[i] = 2 + i * 2;
   }

```
El siguiente fragmento de código inicializa un vector dinámicamente con todos sus valores en 10.
```c
int main(){
	int vec[N];
    int i;
    for( i = 0; i < N; i++){
    	vec[i] = 10;
   }
```

## Vectores: inicialización estática
El siguiente fragmento de código inicializa estáticamente los 3 elementes del vector con los valores 0, 1 y 2 respectivamente. 
```c
int main(){
	int vec[3] = { 0, 1, 2 };
```
El siguiente fragmento de código inicializa estáticamente los 3 elementes del vector con números pares consecutivos. 
```c
int main(){
	int vec[3] = { 2, 4, 6 };
```
El siguiente fragmento de código inicializa estáticamente un vector con su primer elemento en 1, y todos los elementos restantes en 0 (inicialización implícita).
```c
int main(){
	int vec[10] = { 1 };
```
Nota: esta inicialización utiliza una propiedad de los segmentos de programa. Esto se verá con sumo detalle en la asignatura Sistemas Operativos

El siguiente fragmento de código inicializa estáticamente un vector con su primer elemento en 1, el siguiente en 2 y todos los elementos restantes en 0 (inicialización implícita).
```c
int main(){
   int vec[10] = { 1, 2 };
```
Nota: esta inicialización utiliza una propiedad de los segmentos de programa. Esto se verá con sumo detalle en la asignatura Sistemas Operativos

El siguiente fragmento de código inicializa estáticamente los dos vectores con todos sus elementos en 0. Ambas inicializaciones tienen el mismo efecto

```c
int main(){
   int vec1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   int vec2[10] = { 0 }

```
Nota: esta inicialización utiliza una propiedad de los segmentos de programa. Esto se verá con sumo detalle en la asignatura Sistemas Operativos

Nota: cuando un vector se inicializa estáticamente podemos no poner en su declaración la cantidad máxima de elementos (valor que está entre corchetes). De esta manera el vector tendrá una cantidad de elementos igual a la cantidad declarada. Por ejemplo:
int v[] = { 0, 1, 2, 3 };
tendrá una capacidad de 4 elementos.

## Vectores: uso
Ejemplo: inicializar un vector con 10 números al azar y mostrar la suma de todos sus elementos.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main(){
	int a[N], i, suma;
 /* Inicializo generador de números aleatorios. */
	srand(time(NULL));
 /* Inicializa el vector. */
	for(i = 0; i < N; i++){
    	a[i] = rand() % 10;
    }
 /* Calculo su suma. */
	suma = 0;
    for(i = 0; i < N; i++){
    suma = suma + a[i];
    }
 /* Muestro el resultado. */
	printf("La suma del vector es: %d\n", suma);
    return 0;
}

```
Hacer los ejercicios del práctico secciones:
• II- Arreglos o Vectores (arrays) hasta ejercicio 9.

## Vectores: frecuencia de un número
La frecuencia de un número identifica la cantidad de veces que aparece dicho número en una serie de números.

Ejemplo: obtener 10 números al azar entre 0 y 4 y mostrar cuantas veces se obtuvo cada número (frecuencia). En este caso, necesitamos obtener la frencuencia de 5 números (del 0 al 4).
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MUESTRAS 10 /* cantidad de muestras */
#define CANTIDAD_NROS 5 /* numeros entre 0 y 4 ==> 5 posiciones */
int main(){
	int frecuencia[CANTIDAD_NROS] = { 0 };
    int i, numero;
 /* Inicializo generador de números aleatorios. */
    srand(time(NULL));
 /* Proceso números. */
    for(i = 0; i < MUESTRAS; i++){
    numero = rand() % 5; /* numeros entre 0 y 4. */
    frecuencia[numero]++;
    }
 /* Muestro resultado. */
    for(i = 0; i < CANTIDAD_NROS; i++){
    	printf("%d salio %d veces\n", i, frecuencia[i]);
    }
    return 0;
}
```
Ejemplo: obtener 10 numeros al azar entre 1 y 5 y mostrar cuantas veces se obtuvo cada número (frecuencia). En amarillo se muestran los cambios con respecto al ejercicio anterior.
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MUESTRAS 10 /* cantidad de muestras. */
#define CANTIDAD_NROS 5 /* numeros entre 0 y 4 ==> 5 posiciones. */
int main(){
	int frecuencia[CANTIDAD_NROS] = { 0 };
    int i, numero;
 /* Inicializo generador de números aleatorios. */
    srand(time(NULL));
 /* Proceso números. */
    for(i = 0; i < MUESTRAS; i++){
    	numero = rand() % 5 + 1; /* numeros entre 1 y 5. */
        frecuencia[numero - 1]++;
    }
 /* Muestro resultado. */
	for(i = 0; i < CANTIDAD_NROS; i++){
    	printf("%d salio %d veces\n", i + 1, frecuencia[i]);
    }
   return 0;
}
```

Ejemplo: otra forma de resolver el ejercicio anterior utilizando el switch.
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MUESTRAS 10 /* cantidad de muestras. */
#define CANTIDAD_NROS 5 /* numeros entre 0 y 4 == 5 posiciones. */
int main(){
	int frecuencia[CANTIDAD_NROS] = { 0 };
    int i, numero;
 /* Inicializo generador de números aleatorios. */
    srand(time(NULL));
 /* Proceso números. */
    for(i = 0; i < MUESTRAS; i++){
    	numero = rand() % 5 + 1; /* numeros entre 1 y 5. */
        switch(numero){
        	case 1:
            	frecuencia[0]++;
 				break;
 			case 2:
 				frecuencia[1]++;
 				break;
 			case 3:
 				frecuencia[2]++;
				break;
 			case 4:
 				frecuencia[3]++;
				break;
 			case 5:
 				frecuencia[4]++;
 				break;
 			default:
 				printf("Error!");
 				break;
		}
 }
 /* Muestro resultado. */
	for(i = 0; i < CANTIDAD_NROS; i++){
    	printf("%d salio %d veces\n", i + 1, frecuencia[i]);
    }
    return 0;
}
```
¿Puede determinar que versión es mejor? ¿Por qué?
Ayuda: ¿cuál es más sencillo de leer y entender? si cambian la cantidad de muestras y/o
rango de números, ¿cuál será más sencillo de modificar?

Ejemplo: obtener 10 numeros al azar pares 2, 4, 6 y 8 y mostrar cuantas veces se obtuvo cada número (frecuencia).
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MUESTRAS 10 /* cantidad de muestras */
#define CANTIDAD_NROS 4
int main(){
	int frecuencia[CANTIDAD_NROS] = { 0 };
    int i, numero;
 /* Inicializo generador de números aleatorios. */
    srand(time(NULL));
 /* Proceso numeros */
    for(i = 0; i < MUESTRAS; i++){
    	numero = rand() % 4 + 1; /* numeros entre 1 y 4. */
 		numero *= 2; /* obtiene el numero par 2, 4, 6 u 8. */
 		printf("%d ", numero);
 		switch(numero){
 			case 2:
 				frecuencia[0]++;
 				break;
 			case 4:
 				frecuencia[1]++;
 				break;
 			case 6:
 				frecuencia[2]++;
 				break;
 			case 8:
 				frecuencia[3]++;
 				break;
 			default:
 				printf("Error!");
 				break;
		}
 }
 /* Muestro resultado. */
	printf("\n\n");
    for(i = 0; i < CANT_NUMEROS; i++){
    	printf("%d salio %d veces\n", 2 + i * 2, frecuencia[i]);
    }
    return 0;
}

```
Podemos utilizar otros ejemplois con inicialización de vectores con vocales, consonantes, numeros impares, numeros pares, valores posibles de un dado, etc:
int vocales[] = { 'a', 'e', 'i'. 'o'. 'u' };
int pares[] = { 2, 4, 6, 8, 10 };
int impares[] = { 1, 3, 5, 7, 9 };
int dado[] = { 1, 2, 3, 4, 5 };

Hacer los ejercicios del práctico 2 secciones:
• I- Arreglos o Vectores (arrays) del ejercicio 10 al 16.

## Vectores: vectores paralelos
Como vimos, un vector almacena datos de un mismo tipo. Pero muchas veces sucede que queremos hacer operaciones con cosas relacionadas que no son del mismo tipo. Por ejemplo, podríamos querer registrar la temperatura de distintas ciudades. Las ciudades serán n ombradas con una letra y las temperaturas con un número real.

En este caso necesitaríamos 2 vectores (una para la ciudad y otro para la temperatura) de manera que un índice del vector ciudad indicará el nombre de la ciudad, mientras que el mismo índice en el vector temperatura, tendrá su temperatura asociada.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define N 10 /* Maxima cantidad de ciudades a procesar. */
int main(){
	char ciudad[N];
    float temp[N];
    int cantidad, i;
 /* Inicializo generador de numeros aleatorios. */
	srand(time(NULL));
 /* Procesa numeros */
    cantidad = 0;
    for(i = 0; i < N; i++){
    	printf("Ingrese ciudad (una letra. o 1 para finalizar): ");
 		scanf(" %c", &ciudad[i]); /* note el espacio entre la comilla y %c */
		 if(ciudad[i] == '1'){
			 break;
 		}
		ciudad[i] = toupper(ciudad[i]); /* asegura que sea mayúscula. */
 		printf("Ingrese temperatura para ciudad %c: ", ciudad[i]);
 		scanf("%f", &temp[i]);
 		cantidad++;
 		printf("\n");
	}
 /* Muestra resultado. */
	printf("\n\nCiudad\tTemp\n------\t----\n");
    for(i = 0; i < cantidad; i++){
 		printf("%c\t%.2f\n", ciudad[i], temp[i]);
    }
    return 0;
```
## Vectores: máximo, mínimos, contadores y acumuladores
Es posible calcular máximos y minimos de vectores. También es posible utilizar acumuladores y contadores.
• Ejemplo de contadores: contar cuántas veces está el número 3 en un vector.
• Ejemplo de acumuladores: sumar todos los elementos de un vector.
• Ejemplo de mínimos: hallar el número menor de un vector.
• Ejemplo de máximos: hallar el número máximo de un vector.

Hacer los ejercicios del práctico secciones:
• II- Arreglos o Vectores (arrays) todos los ejercicios.


## Cadena de caracteres
Cadenas de caracteres, strings, o cadenas de texto se llama al tratamiento de texto en el lenguaje C. Esto nos permite poder ingresar y procesar palabras, oraciones y frases.

Una cadena de caracteres es un vector de caracteres, que tiene como característica que su último caracter es el 0 (escrito como '\0'). Este último caracter 0 es utilizado por el lenguaje C como bandera para identificar cuando una cadena de caracteres finaliza.

Por lo tanto, una cadena de caracteres tiene el mismo tratamiento que un vector de caracteres.

Declaración de cadenas de caracteres:
char cadena1[] = { 'U', 'N', 'I', 'V', 'E', 'R', 'S', 'I', 'D', 'A', 'D', '\0' };
char cadena2[] = "UNIVERSIDAD";

Ambos vectores almacenan la misma cadena de caracteres, pero su inicialización estática fue diferente. Preferimos la segunda inicialización estática porque es más sencilla de escribir y de leer. Nótese que por más que explicitamente no esté escrito el caracter 0, al estar encerrado entre comillas dobles el lenguaje C entiende que se trata de una cadena de caracteres y genera autom´ñaticamente este caracter de finalización.

Aqui veremos la diferencia entre caracteres y cadenas:
• 'A' representa al caracter A. Ocupa un sólo byte (un sólo char)
• "A" representa a la cadena de caracteres A. Ocupa 2 bytes (dos chars), uno para la letra A y
otro para el caracter de finalización '\0' 

Por lo tanto, al usar vector hay que tener en cuenta la longitud del mismo: nos debemos asegurar que el tamaño del vector tiene suficientes elementos para almacenar la cadena más un caracter más (el caracter '\0').

Todo lo aprendido acerca de vectores aplica para cadenas. Por lo tanto, no es posible asignar una cadena a un vector:
char cadena[80];
cadena = "HOLA!"; /* INCORRECTO!! */
Sólo es posible inicializar su valor en forma estática (como ya vimos):
char cadena[80] = "HOLA!"; /* CORRECTO */

O dinámica:
char cadena[80];
cadena[0] = 'H';
cadena[1] = 'O';
cadena[2] = 'L';
cadena[3] = 'A';
cadena[4] = '!';
cadena[5] = '\0';


A las cadenas de caracteres podemos asignarle valores de manera más sencilla utilizando funciones
como strcpy():
char cadena[80];
strcpy(cadena, "Hola");

## Cadena de caracteres: impresión en pantalla
Para imprimir una cadena de caracteres por pantalla podemos utilizar el ya conocido printf con el formato de caracter (%c) tratando a la cadena como a un vector. Es decir:

```c
#include <stdio.h>
#include <string.h>
int main(){
	char ciudad[80];
    int i;
    strcpy(ciudad, "Bariloche");
    i = 0;
    while(ciudad[i] != '\0'){
    	printf("%c", ciudad[i]);
 		i++;
    }
	printf("\n");
    return 0;
}
```
Pero C provee un método más facil: para imprimir cadena de caracteres por pantalla utilizaremos printf con el formato %s. He aquí un ejemplo:

```c
#include <stdio.h>
#include <string.h>
int main(){
	char ciudad[80];
    strcpy(ciudad, "Bariloche");
    printf("Yo vivo en %s.\n", ciudad);
    return 0;
}
```
Es posible especificar el ancho del campo en donde se deberá escribir la cadena. Si en el ejemplo anterior usaramos
`printf("Yo vivo en %30s.\n", ciudad);`
Entonces el nombre de la ciudad salría escrito en un espacio de 30 caracteres con blancos a la izquierda.

## Cadena de caracteres: ingreso por teclado
Para el ingreso de cadena de caracteres por teclado podemos utilizar:
• scanf
• fgets

## Cadena de caracteres: ingreso por teclado con scanf()
Hasta ahora habíamos visto el ingreso de datos utilizando la función scanf. Aprendimos, además, que la función scanf puede leer una cadena de caracteres desde el teclado utilizando el formato %s. El inconveniente que presenta es que sólo lee caracteres del teclado hasta el primer espacio o hasta el enter (‘\n’).

Ejemplo:
```c
#include <stdio.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];
 	printf("Ingrese una frase: ");
 	scanf("%30s", &cadena[0]);
 	printf("%s\n", cadena);
	return 0;
}
```
Nota: En el ejemplo anterior el formato es “%30s” para leer una palabra de a lo sumo 30 caracteres. No lee espacios en blanco.
Otro formato que admite scanf es el de leer todo hasta el ‘\n’. Para esto se utiliza el formato ‘[\n]’.
```c
#include <stdio.h>
#define LONGITUD 80
int main(){
	char cadena[LONGITUD];
    printf("Ingrese una frase: ");
    scanf("%[^\n]", &cadena[0]);
    printf("%s\n", cadena);
    return 0;
}
```
## Cadena de caracteres: ingreso por teclado con fgets()
La última función para el ingreso de datos por teclado que vamos a ver es la función fgets. Ésta seutiliza para leer datos de archivos, pero también se la puede utilizar para leer datos por teclado (como vamos a ver enseguida). Las ventajas que presenta esta función son:
a. es sencilla y consume todo lo que el usuario ingresa por teclado (hasta el ‘\n’ inclusive);
b. permite controlar la cantidad de caracteres leídos de teclado para no sobrepasar el tamaño del buffer (del tamaño de la cadena definida); y
c. agrega automáticamente el ‘\0’ al final de la cadena leída
En los sig. ejemplos se puede utilizar fgets(cadena, LONGITUD, stdin); o bien fgets(&cadena[0], LONGITUD, stdin);. Son equivalentes. Utilice el que le resulte más claro.

Ejemplo:
```c
#include <stdio.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];

    printf("Ingrese una frase: ");
    fgets(cadena, LONGITUD, stdin);
    printf("%s\n", cadena);
    return 0;
}

```
Un inconveniente que presenta fgets() es que el ‘\n’ queda dentro de la cadena de caracteres. Para limpiar esta secuencia de caracteres inválidos podemos reemplazarlos por '\0' como se muestra a continuación (nota: en el ejemplo siguiente la función strlen() retorna la longitud de la cadena):

```c
#include <stdio.h>
#include <string.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];
    int i;

    printf("Ingrese una frase: ");
    fgets(cadena, LONGITUD, stdin);
 /* Recorre cadena reemplazando los caracteres '\r' y '\n' a '\0' */
    for( i = 0; i < (int) strlen(cadena); i++){
    	if(cadena[i] == '\r' || cadena[i] == '\n'){
        	cadena[i] = '\0';
         }
     }
    printf("%s", cadena);
    return 0;
}
```
Y como sabemos que esos caracteres especiales '\r' y/o '\n' están al final, podemos resolverlo reemplazando el texto amarillo del ejemplo anterior por el siguiente código:
```c
/* Recorre de atras hacia adelante reemplazando '\r' y '\n' a '\0' */
 i = (int) strlen(cadena) - 1;
 while(cadena[i] == '\r' || cadena[i] == '\n'){
 	cadena[i] = '\0';
 	i--;
 }
```
## Cadena de caracteres: biblioteca de funciones string.h
En esta parte veremos las 3 funciones principales para el uso de cadena de caracteres provistas por la biblioteca string.h:
• strlen(char cadena[]) retorna la cantidad de caracteres de cadena

• strcpy(char destino[], char origen[]) copia la cadena origen en destino

• strcnpy(char destino[], char origen[], int n) copia los primeros n caracteres de cadena
origen en destino

• strcat(char destino[], char origen[]) concatena (suma) la cadena origen en destino

• strncat(char destino[], char origen[], int n) concatena (suma) los primeros n caracteres
de la cadena origen en destino

• strcmp(char cadena1[], char cadena2[]) Compara cadena1 y cadena2 retornando 0 si
son iguales, un valor negativo si cadena1 < cadena2, y un valor positivo si cadena1 > cadena2

• strncmp(char cadena1[], char cadena2[], int n) Compara los primeros n caracteres de
cadena1 y cadena2 retornando 0 si son iguales, un valor negativo si cadena1 < cadena2, y un valor positivo si cadena1 > cadena2

• strupr(char cadena) convierte minúsculas en mayúsculas

• strlwr(char cadena) convierte mayúsculas en minúsculas

Función strlen(). Para ver la longitud real de un string o cadena de caracteres usamos srtlen. Ejemplo:
```c
#include<stdio.h>
#include<string.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];
 	int longitud;
	printf("Ingrese una frase: ");
 	fgets(cadena, LONGITUD, stdin); /* o &cadena[0] */
 	cadena[strlen(cadena) - 1] = '\0'; /* limpia '\n' final */
 	longitud = strlen(cadena); /* o strlen(&cadena[0] */
 	printf("La frase tiene %d caracteres.\n", longitud);
 	return 0;
}
```
Función strcpy(). Otra cosa que se puede hacer es copiar un string usando strcpy. El siguiente ejemplo pide por separado el nombre, y luego el apellido. Luego copia el nombre en otra variable, le agrega un espacio en blanco, y por último le agrega el apellido al final:
```c
#include<stdio.h>
#include<string.h>
#define LONGITUD 100
int main(){
	char nombre[LONGITUD], basura;
    char apellido[LONGITUD];
	char completo[LONGITUD]; /* nombre y apellido */
 	int longNombre; /* longitud de nombre */
 	printf("Ingrese su nombre: ");
 	scanf("%[^\n]", nombre); /* o &nombre[0] */
 	scanf("%c", &basura); /* elimina el \n para que no lo tome el sig scanf */
 	printf("Ingrese su apellido: ");
 	scanf("%[^\n]", apellido);
 /* copiamos nombre en la cadena completo */
    strcpy(completo, nombre);
 /* copiamos apellido en la variable completo,
 * pero a continuacion del nombre */
    longNombre = strlen(nombre); /* o &nombre[0] */
    completo[longNombre] = ' ';
    strcpy(&completo[longNombre + 1], apellido);
    printf("Su nombre completo es: %s.\n", completo);
    return 0;
}
```
Función strcat(). Esto mismo se podría haber resuelto concatenando cadena de caracteres. Es decir, dado el nombre en una variable y el apellido en otra, podríamos copiar el nombre a una tercer variable, luego concatenarle (agregarle) un espacio en blanco, y por último concatenarle el apellido. Esto es lo que hace el siguiente ejemplo (nótese que al concatenar el espacio, el mismo es agregado como cadena de caracteres, como string, entre comillas dobles y no simples):

```c
#include<stdio.h>
#include<string.h>
#define LONGITUD 100
int main(){
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
}
```

Función strcmp(). También es posible comparar dos cadenas para ver si son iguales y así poder tomar alguna decisión. Por ejemplo, ingresar una oración, palabra a palabra, y finalizar cuando se ingrese la cadena punto (".").
```c
#include<stdio.h>
#include<string.h>
#define LONGITUD 1000
int main(){
	char oracion[LONGITUD] = { '\0' }; /* inicializado para usar strcat */
    char palabra[LONGITUD];
 	char basura;
 	int bandera;
 	do {
 /* Pide ingreso de datos */
 		printf("Ingrese una palabra: ");
 		scanf("%[^\n]", palabra);
 		scanf("%c", &basura); /* elimina el \n */
 /* Verifica si se ingreso "." */
		 if(strcmp(palabra, ".") != 0){
         	bandera = 1;
 			strcat(oracion, " ");
 			strcat(oracion, palabra);
		 } else {
			bandera = 0;
 			strcat(oracion, palabra);
           }
	} while(bandera != 0);
	printf("Ud. ha ingresado la frase:\n%s\n", oracion);
    return 0;
}
```
Nota: Al pedir una palabra ingrese, en vez de una frase (varias palabras separadas por punto). Luego pruebe cambiar los dos scanf en amarillo y repita el proceso (en el primer scanf utilizar %s y eliminar el 2do scanf).

## Cadena de caracteres: funciones de conversión de tipos 
En esta parte veremos las funciones de la biblioteca stdlib.h para convertir cadenas de caracteres a otros tipos de datos:
• int atoi(char cadena[]) retorna el valo númerico entero (int) que representa esa cadena
• double atof(char cadena[]) retorna el valo númerico real (double) que representa esa
cadena

Ahora que sabemos utilizar fgets para leer cadena de caracteres, es necesario aprender a convertir estas cadenas de caracteres a los distintos tipos de datos. Por ejemplo, si quiere leer la edad de una persona y utilizo gets, lo que voy a tener es una cadena con los valores de la edad, por ejemplo “35”: char cadena[LONGITUD] = “35”. Lo que vamos a necesitar es pasar (o convertir) esa cadena a un
entero. Es decir, convertir el “35” en 35 (nótose que primero está con las comillas indicando que es una cadena de caracteres, y luego sin las comillas indicando que es un entero).

Nota: estas funciones necesitan de #include<stdlib.h>.
Para convertir de una cadena de caracteres a un entero se utiliza atoi().

```c
#include <stdio.h>
#include <stdlib.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];
    int edad;

    printf("Ingrese una edad: ");
    scanf("%[^\n]", cadena); /* o &cadena[0] */
    edad = atoi(cadena); /* o atoi(&cadena[0]) */
    printf("Cadena:%s. Entero:%d.\n", cadena, edad);
    return 0;
}
```

Para convertir de una cadena de caracteres a un float se utiliza atof().
```c
#include<stdio.h>
#include<stdlib.h>
#define LONGITUD 30
int main(){
	char cadena[LONGITUD];
    float pi;

    printf("Ingrese el valor de PI: ");
    scanf("%[^\n]", cadena);
    pi = atof(cadena);/* o atof(&cadena[0]); */
    printf("Cadena:%s. Float:%f.\n", cadena, pi);
    return 0;
}
```

Pero que sucede si el programa esperaba un número (por ejemplo la edad de una persona) y el usuario ingresa caracteres alfanuméricos (es decir, ingresa letras en vez de números)? El programa fallará. Entonces hay que controlar lo que el usuario ingresó por teclado antes de hacer la conversión al tipo deseado. Para esto se utilizan las siguientes funciones de ctype.h vistas en el apunte anterior:
int isdigit(int c);

Ejemplo:
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define LONGITUD 30
int main()
{
 char cadena[LONGITUD];
 float pi;
 int longitud;
 int i;

 printf("Ingrese el valor de PI: ");
 scanf("%[^\n]", cadena);
 longitud = strlen(cadena);
 for(i = 0; i < longitud; i++)
 {
 if( ! isdigit(cadena[i]) && cadena[i] != '.')
 {
 printf("El valor ingresado no es un numero!\n");
 return 1;
 }
 }
 pi = atof(cadena);
 printf("Cadena:%s. Float:%f.\n", cadena, pi);
 return 0;
}
```




Biblioteca ctype.h
Revise la biblioteca ctype.h desde la web como se indicó al comienzo de este apunte.
Hacer los ejercicios del práctico secciones:
• III- Cadena de Caracteres.

## Matrices
Las matrices son vectores de dos dimensiones. Supongamos la mnatriz m con 3 filas y 4 columnas. 

La matriz m se declara en lenguaje C de la siguiente manera:
int m[3][4]:
Es decir, tipo nombre[FILAS][COLUMNAS].


## Matrices: acceso a variables
Para acceder a cada elemento de la matriz se utilizan índices igual que en los vectores. En el siguiente
diagrama se muestra el nombre de la variable y sus índices para acceder a cada celda de la matriz.

| m[0][0]  | m[0][1]   | m[0][2]  | m[0][3]  |
| ------------ | ------------ | ------------ | ------------ |
| m[1][0]  | m[1][1]  | m[1][2]  | m[1][3]  |
| m[2][0  |m[2][1]   | m[2][2]  |m[2][3]
   


Para asignar un número a una matriz, utilizamos el nombre de la variable (nombre de la matriz) y los índices fila y columna al que queremos acceder. Por ejemplo,:
a[0][0] = 1;
a[1][2] = 2;

## Matrices: inicialización
Al igual que los vectores, las matricies se pueden inicializar de dos maneras:
• De forma dinámica
• De forma estática

## Matrices: inicialización dinámica
El siguiente fragmento de código inicializa un vector dinámicamente con todos sus valores en cero.
```c
int main(){
	int m[FILAS][COLUMNAS];
    int i, j;
    for( i = 0; i < FILAS; i++){
		for( j = 0; j < COLUMNAS; j++){
 			m[i][j] = 0;
 		}
	 }
```

El siguiente fragmento de código inicializa un vector dinámicamente con valores consecutivos por filas:

```c
int main(){
	int m[FILAS][COLUMNAS];
 	int i, j, init = 0;
 	for( i = 0; i < FILAS; i++){
 		for( j = 0; j < COLUMNAS; j++){
 			m[i][j] = init;
 			init++;
		 }
	 }
```
El siguiente fragmento de código inicializa un vector dinámicamente con valores consecutivos por columnas:

```c
int main(){
	int m[FILAS][COLUMNAS];
 	int i, j, init = 0;
 	for( i = 0; i < COLUMNAS; i++) {
		for( j = 0; j < FILAS; j++){
 			m[j][i] = init;
 			init++;
 		}
	 }
```

## Matrices: inicialización estática
El siguiente fragmento de código inicializa estáticamente una matriz
```c
int main(){
	int m[2][3] =
	{
 		{ 0, 1, 2, },
		 { 0, 1, 2, },
 	}
```

El siguiente fragmento de código inicializa estáticamente una matriz en cero.
```c
int main(){
	int m[2][3] = { {0} };
```
## Matrices: uso
Ejemplo: mostrar los valores de una matriz
```c
#include <stdio.h>
#define FILAS 2
#define COLUMNAS 3
int main(){
	int i, j;
 	int m[FILAS][COLUMNAS] =
 {
		{ 1, 2, 3},
	 	{ 4, 5, 6},
 };
	for(i = 0; i < FILAS; i++){
 		for(j = 0; j < COLUMNAS; j++){
			printf("%d ", m[i][j]);
 		}
 	printf("\n");
	}
 return 0;
}

Ejemplo: inicializar una matriz con valores al azar entre 0 y 9 y luego mostrarla.
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 2
#define COLUMNAS 3
int main(){
	int i, j;
	int m[FILAS][COLUMNAS];
 	srand(time(NULL));
 /* Inicializa la matriz */
 		for(i = 0; i < FILAS; i++){
 			for(j = 0; j < COLUMNAS; j++){
 				m[i][j] = rand() % 10;
 			}
 		}
 /* Muestra la matriz */
	for(i = 0; i < FILAS; i++){
 		for(j = 0; j < COLUMNAS; j++){
 			printf("%d ", m[i][j]);
 		}
 		printf("\n");
 	}
 return 0;
}
```

Ejuemplo: calcular la suma de la diagonal principal (superior-izequierda a inferior–derecha).

```c
#include <stdio.h>
#define N 3
int main(){
	int i, suma;
 	int m[N][N] =
 {
		{ 1, 2, 3 },
 		{ 4, 5, 6 },
 		{ 7, 8, 9 }
 };
 /* Calcula suma diagonal superior-izq a inferior-der */
	suma = 0;
 	for(i = 0; i < N; i++){
 		suma += m[i][i];
	}
 /* Muestra resultado */
	 printf("La suma de la diagonal es: %d\n", suma);
	
	return 0;
}
```

Ejuemplo: calcular la suma de la diagonal secundaria (superior-derecha a inferior–izquierda).

```c
#include <stdio.h>
#define N 3
int main(){
	int i, suma;
 	int m[N][N] =
 {
		{ 1, 2, 3 },
 		{ 4, 5, 6 },
 		{ 7, 8, 9 }
 };
 /* Calcula suma diagonal superior-der a inferior-izq */
	suma = 0;
 	for(i = 0; i < N; i++){
		suma += m[i][N - i - 1];
 	}
 /* Muestra resultado */
	printf("La suma de la diagonal es: %d\n", suma);
 	return 0;
}

```

Hacer los ejercicios del práctico secciones:
• IV- Matrices.




# Unidad IV – Funciones

## Funciones: Conceptos
Hasta ahora vimos como hacer algoritmos (programas) utilizando únicamente la función main. Los problemas vistos se resolvían con una secuencia de pasos que comenzaba en la función main y finalizaba en el return del mismo.

Hasta ahora vimos como hacer algoritmos (programas) utilizando la función main (punto de entrada a todo programa en C). Hemos visto que nuestros programas pueden utilizar funciones de la biblioteca standard de C, como por ejemplo la función printf() o scanf() de la biblioteca stdio.h (recuerde otras bibliotecas: stdlib.h, string.h, etc)

El lenguaje C permite también que el programador implemente sus propias funciones. Al usar funciones definidas por el propio programador, los programas pueden estructurarse en partes más pequeñas, más sencillas. Cada una de estas partes debe responder a un único objetivo (por ejemplo, una función para sumar dos valores, otra para multiplicar dos valores). Estas funciones podrán ser luego reutilizadas en diferentes partes del programa. 

Resolver un problema pensando en dividirlo en varias funciones, nos obliga a dividir al problema principal (complejo) en un conjunto de problemas más pequeños (y más sencillos). Esta división del problema nos dará varias ventajas:
1. Cada división independiente (función) será más fácil de programar y probar.
2. El problema principal es más sencillo de entender.
3. Podemos reutilizar cada una de las divisiones independientes (funciones).
4. Estas divisiones independientes (funciones) podrían ser programadas por diferentes
personas.

## Funciones: valores de retorno
Escriba funciones para leer un número entero, y un número real; utilícelas en un programa:
```c
#include <stdio.h>
int leerNroEntero(){
	int valor;
  	printf("Ingrese un numero entero: ");
 	scanf("%d", &valor);
 	return valor;
}
float leerNroReal(){
	float valor;
 	printf("Ingrese un numero real: ");
 	scanf("%f", &valor);
 	return valor;
}
int main(){
	int entero;
 	float real;
	 entero = leerNroEntero();
	 real = leerNroReal();
 	printf("Entero: %d\nReal: %f\n", entero, real);
 	return 0;
}

```
Analicemos un poco el ejercicio anterior. Allí vemos dos funciones: main (como siempre) y leerNroEntero (una nueva función que creamos nosotros). Como vemos en su declaración:
```c
int leerNroEntero(){

```
Decimos que esta función retorna un entero (int) y que su nombre es leerNroEntero. La función espera que se ingrese un número por teclado, lo asigna a la variable valor, y retorna la variable valor como respuesta a quien la llame. Así entonces cuando en la función main se llama a esta función de la siguiente manera:

```c
entero = leerNroEntero();
```
El valor retornado por leerNroEntero se asigna a la variable edad. Lo mismo sucede con la siguiente llamada.

## Funciones: parámetros
Pero además de retornar valores, una función puede recibir parámetros. Los parámetros son valores que toma la función en el momento en que es llamada. Los parámetros son variables que toman un valor específico en el momento en que se ejecuta el programa (igual que las otras variables que hemos estado viendo. Así, por ejemplo, podemos hacer un programa que calcule la suma de dos números:

```c
int suma(int a, int b){
	int suma;
 	suma = a + b;
 	return suma;
}

```
Analicemos un poco la definición de esta función:
```c
int suma(int a, int b)

```
Esta función se llama suma, retorna un entero, y recibe dos parámetros enteros: el primer
parámetro se llama a y el segundo b. Para utilizar la función suma debemos especificarle sus dos parámetros, que son los dos números que se deben sumar. Hay varias formas de especificar estos parámetros:

```c
suma1 = suma(1, 2);
 suma2 = suma(n1, 2);
 suma3 = suma(n2, b);

```

El primer ejemplo asigna los valores 1 y 2 a las variables a y b de la función suma
respectivamente. La función al finalizar retorna 3 y se lo asigna a la variable suma1.

El segundo ejemplo asigna los valores n1 y 2 a las variables a y b de la función suma
respectivamente. Así por ejemplo, si n1 tuviera el valor 3, la variable a tomaría dicho valor. La función al finalizar retorna 5 y se lo asigna a la variable suma2.

El tercer ejemplo asigna los valores n1 y n2 a las variables a y b de la función suma
respectivamente. Así por ejemplo, si n1 tuviera el valor 3, y n2 el valor 4, las variables a y b tomarían los valores 3 y 4 respectivamente. La función al finalizar retorna 7 y se lo asigna a la variable suma3

El ejemplo completo quedaría así:

```c
#include <stdio.h>
int suma(int a, int b){
	int suma;
 	suma = a + b;
 	return suma;
}
int main(){
	int n1 = 3;
 	int n2 = 4;
	int suma1, suma2, suma3;
 	suma1 = suma(1, 2);
 	suma2 = suma(n1, 2);
 	suma3 = suma(n1, n2);
 	return 0;
}

```
## Funciones: uso de void (procedimientos)
Algunas veces necesitamos crear funciones que no retornen ningún valor. Los ejemplos más sencillos de éstos casos son referentes a impresión de datos en pantalla. Supongamos que queremos hacer una función que imprima un mensaje de bienvenida al programa:
```c
void bienvenida(){
	char aux[100];
 	printf("Bienvenido al curso de UNRN\n");
 	printf("Presione ENTER para comenzar\n");
	fgets(aux, 100, stdin);
 	return;
}

```
El tipo de retorno void significa que la función no retorna ningún valor. En otros lenguajes de
programación este tipo de funciones que no retornan ningún valor se llaman procedimientos. La
forma de usar esa función en nuestro programa (función main) es la siguiente:

```c
#include <stdio.h>
void bienvenida(){
	char aux[100];
 	printf("Bienvenido al curso de UNRN\n");
 	printf("< Presione ENTER para comenzar >\n");
 	fgets(aux, 100, stdin);
}
int main(){
	bienvenida();
 	return 0;
}

```
Hacer los ejercicios del práctico secciones:
• I- Funciones útiles generales

## Funciones: parámetros por referencia y por valor
Algún alumno se preguntará en este momento, ¿que sucede si modifico el valor de la variable dentro de la función? ¿Se modifica también la variable asociada en la llamada a la función? Por ejemnplo:
```c
#include <stdio.h>
void incrementa(int a){
	a = a + 1
}
int main(){
	int x = 0;
	 incrementa(x);
 	incrementa(x);
	incrementa(x);
 	printf("El valor incrementado 3 veces es: %d\n", x);
 	return 0;
}

```
Si ejecutamos este ejemplo veremos que la variable x permanece con su valor asignado
originalmente (valor 0) por lo que concluimos que al modificar el valor de un parámetro de una función, su variable equivalente en la llamada no se modifica, y permanece como estaba.

Esto es porque en C el pasaje de parámetros es por valor. El pasaje de parámetros por valor no cambia el valor de las variables originales al modificar el valor de los parámetros.

En otros lenguajes (por ejemplo en C++) existe el pasaje de parámetros por referencia. Cuando los parámetros se pasan por referencia, si cambiamos el valor dentro de la función, también se cambian en las variables de la llamada. 

El lenguaje C tiene algo que a primera vista pareciera ser pasaje de parámetros por referencia, pero que en realidad es implementada de otra manera: a través de punteros. Si modificamos el ejercicio anterior para utilizar punteros, entonces si se logrará el resultado deseado.

Notas:
o Para utilizar el puntero en la función utilizar el operador *.
o Para pasar por parámetro el puntero a una variable utilizar el operador &.

```c
#include <stdio.h>
void incrementa(int *a){
	*a = *a + 1;
}
int main(){
	int x = 0;
	incrementa(&x);
	incrementa(&x);
 	incrementa(&x);
 	printf("El valor incrementado 3 veces es: %d\n", x);
 	return 0;
}
```

## Funciones: vectores, cadenas y matrices por parámetro
Además de tipos de datos primitivos (char, int, float double, etc) las funciones pueden recibir por prámetros vectores, cadenas y matrices. Para esto lo que se debe hacer indicar que se trata de un vector, cadena, o matriz incluyendo los corchetes como se muestra en los siguientes ejemplos.

Vector: haga una función que sume los elementos del vector:
```c
int sumaVector(int vec[], int cantElementos){
	int i, suma;
	 suma = 0;
 	for(i = 0; i < cantElementos; i++){
		suma += vec[i];
	}
	return suma;
}
```
Como vemos en la declaración de la función sumaVector, el primer parámetro es un vector den enteros. Esto queda determinado por los corchetes [] (se trata de un vector) y por su tipo int (se trata de enteros). Nótese que además se incluye otro parámetro que es la cantidad de elementos que tiene el vector. SIEMPRE que pasamos un vector por parámetro debemos incluír su cantidad de elementos.

Nota: en el caso de los vectores es posible utilizar un define en el programa que especifique esta cantidad, y luego especificar esto en la declaración del vector. Entonces en la función utilizaríamos esta constante N. El siguiente ejemplo ilustra esto:

```c
int sumaVector(int vec[N]){
	int i, suma;
 	suma = 0;
 	for(i = 0; i < N; i++){
		suma += vec[i];
 	}
 	return suma;
}

```
Las diferencias de estos dos ejemplos anteriores son:
• en el primero se indica la cantidad de elementos del vector a través de un parámetro, en el segundo se hace con una constante de programa
• en el primero se utiliza la variable que indica la cantidad de elementos para recorrer el
vector, en el segundo se utiliza la constante de programa

Vemos que la primera tiene ventajas con respecto a la segunda: podemos utilizar la función para vectores de cualquier tamaño. Mientras que en el segundo caso sólo podremos usar esa función para vectores del mismo tamaño N dentro del mismo programa. Es por esto que preferimos siempre la primer opción.

El ejemplo completo, que muestra también como utilizar la función es el siguiente:
```c
#include <stdio.h>
#define N 5
int sumaVector(int vec[], int cantElementos){
	int i, suma;
 	suma = 0;
	for(i = 0; i < cantElementos; i++){
 	suma += vec[i];
 	}
 	return suma;
}
int main(){
	int vector[N] = { 1, 2, 3, 4, 5 };
	int suma;
 	suma = sumaVector(vector, N);
 	printf("El vector suma: %d\n", suma);
 	return 0;
}

```
Cadena de caracteres: como las cadenas de caracteres son vectores, aplica exactamente lo mismo que lo visto para vectores. Hacer los ejercicios del práctico secciones:
• II- Funciones útiles de vectores
• III- Uso de funciones útiles de vectores

Matrices: haga una función que sume un valor escalar a una matriz, retornando el resultado en una segunda matriz:
```c
#define N 3
#define M 3
void sumaEscalar(int mat[N][M], int escalar, int resultado[N][M]){
	int fila, col;
 	for(fila = 0; fila < N; fila++){
 		for(col = 0; col < M; col++){
 			resultado[fila][col] = mat[fila][col] + escalar;
 		}
	 }
}
```
En la declaración de la función observamos varias cosas:
```c
void sumaEscalar(int mat[N][M], int escalar, int resultado[N][M])
```
La función es de tipo procedimiento ya que no retorna ningún valor (es de tipo void). Esta función se llama sumaEscalar, y recibe tres parámetros. El primero y el tercero son matrices enteras de N filas por M columnas. El segundo parámetros es un número entero.

Observe la declaración del parámetro mat: si un parámetro es una matriz SIEMPRE se debe indicar el tamaño de filas y columnas (entre corchetes). Nota: en realidad el tamaño de filas puede o no indicarse (quedando esta declaración optativa así: int mat[][M]), pero a los efectos de este curso y para simplificar al alumno, siempre declararemos ambos atributos simultaneamente.

El ejemplo completo, que muestra también como utilizar la función es el siguiente:

```c
#include <stdio.h>
#define N 3
#define M 3
void sumaEscalar(int mat[N][M], int escalar, int resultado[N][M]){
	int fila, col;
 	for(fila = 0; fila < N; fila++){
 		for(col = 0; col < M; col++){
 			resultado[fila][col] = mat[fila][col] + escalar;
 		}
	 }
}
void mostrarMatriz(int mat[N][M]){
	int fila, col;
 	for(fila = 0; fila < N; fila++){
 		for(col = 0; col < M; col++){
 			printf(" %d ", mat[fila][col]);
		 }
 		printf("\n");
 	}
	printf("\n");
}
int main(){
	int a = 5;
	int m1[N][M] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
 		{ 7, 8, 9 },
	};
	int m2[N][M];
	sumaEscalar(m1, a, m2);
 	mostrarMatriz(m2);
 	return 0;
}
```
En el ejemplo se ve también como implementar una función para imprimir una matriz.

En este ejemplo se ve también que, en el caso de matrices, al modificar el valor del parámetro entro de la función, SI se modifica la matriz original (es el efecto explicado en pasaje de parámetros por referencia). Pero recuerde que C no tiene pasaje de parámetros por referencia, sino que este efecto se debe a que las matrices se pasan por parámetro como punteros (como ya se mencionó, esto no se verá en este capítulo).

Esta última observación (al modificar el valor del parámetro también se modifica la variable original) aplica tanto para matrices como para vectors (y por lo tanto cadena de caracteres).

## Funciones: pasaje de parámetros referencia / valor – síntesis
El pasaje de parámetros de datos nativos (char, int, float, double, etc) es siempre por valor: la variable original mantiene su valor aunque el parámetro se modifique en la función.

El pasaje de parámetros de vectores, cadenas y matrices es siempre por puntero: al modificar el valor de una posición en el vector, cadena o matriz, se modifica la original.

## Funciones: ejemplos
Queda para el alumno hacer algunos ejemplos de funciones indicados a continuación y que se encuentran en el práctico:
1. hallar el valor máximo de un vector
2. hallar el valor máximo de una matriz
3. hallar el valor mínimo de un vector
4. hallar el valor mínimo de una matriz
5. contar la cantidad de ocurrencias de un número dado en un vector
6. contar la cantidad de ocurrencias de un número dado en una matriz
7. sumar dos vectores en un tercer vector resultado
8. sumar dos matrices en una tercer matriz resultado
9. multiplicar dos matrices en una matriz resultado

Hacer los ejercicios del práctico secciones:
• IV- Funciones útiles de matrices
• V- Uso de funciones útiles de matrices

## Alcance de una variable
El alcance de una variable determina el ámbito en el que está puede ser llamada. Así tenemos variables locales y globales. 

Hasta ahora todas las variables que vimos son locales: todas están declaradas dentro de una función (por ejemplo, dentro de la función main, o de la función sumarVector, etc). Decimos que el ámbito de estas funciones es el ámbito de la función: estas variables pueden ser utilizadas únicamente dentro de la función en donde se declaran. Diferentes funciones que declaren variables del mismo nombre hacen referencia a variables diferentes. Estas funciones viven únicamente dentro de la función en donde se declaran.

Pero también podemos tener variables que puedan ser usadas dentro de todo un programa, o dentro de una serie de funciones (a partir de que estas variables son declaradas). Estas variables se llaman variables globales. La forma de usar variables globales se ilustra en el siguiente ejemplo:

```c
#include <stdio.h>
int var;
void incrementar(){
	var = var + 1;
}
int main(){
	var = 3;
 	printf("var = %d\n", var);
 	incrementar();
 	printf("var = %d\n", var);
 	incrementar();
 	printf("var = %d\n", var);
	return 0;
}
```

En el ejemplo se observa que la variable var se declara fuera de todas las funciones, no pertenece a ninguna, sino que es global. Esta variable se usa entonces en la función incrementar y en la función main. 

Preferimos las variables locales frente a las variables globales. Las variables globales se prestan a confusión, y hace que el código de algunas funciones dependan del código de otras funciones. Esto suele conducir a defectos en los programas. En el curso vamos a evitar el uso de variables globales.

Hacer los ejercicios del práctico secciones:
• VI- Alcance de variables

## Recursión
¿Pero qué sucedería si una función se llamara a si misma? La respuesta es recursión. Esta es una técnica de programación utilizada para resolver problemas del tipo factorial, series, etc

Pero para que una función se pueda llamar así misma es necesario que cumpla dos características:
1. debe existir un caso, llamado caso base, por el que el procedimiento no se llama así
mismo y finaliza (evitando llamarse así mismo infinitas veces);
2. cada vez que el procedimiento se llame a si mismo (directa o indirectamente), debe estar más cerca del criterio base.

Veamos en un único programa varios ejemplos de funciones recursivas. En el siguiente ejemplo se muestra como implementar una función que muestre una cuenta regresiva, tanto en forma recursiva como en forma iterativa. También se ilustra como hallar un número factorial de forma recursiva y una sumatoria de manera recursiva. Y por último se ejemplifica el uso de la recursión para hallar series, mostrando la serie de Fibonacci:

```c
#include <stdio.h>
/* Funcion que calcula e imprime una cuenta regresiva de forma recursiva */
void cuentaRegresivaRecursiva(int count){
	printf("%d\t", count);

 /* Siempre tienen que tener una condicion de fin,
 que tiene relacion a la variable recibida. */
	if (count != 0){
 /* Vuelve a llamarse a si misma, por eso se dice que es recursiva */
 cuentaRegresivaRecursiva(count - 1);
	}
}
/* Funcion que calcula e imprime una cuenta regresiva de forma iterativa */
void cuentaRegresivaIterativa(int count){
	int i;
 /* Iterador for, por eso se dice que es iterativa. */
 	for(i = count; i > 0; i--){
 		printf("%d\t", i);
 	}
}
int factorial(int n){
	if (n == 1) /* caso base */{
		return(1);
 	}
	return(n * factorial(n - 1)); /* recursion */
}

int sumatoria(int n){
	if( n == 1 ){
	 return 1;
 	}
	return n + sumatoria(n - 1);
}

int fibonacci(int n){
	if (n == 0) /* primer caso base */{
 		return(0);
 	}
 	if ( n==1 ) /* segundo caso base */{
		return(1);
	 }
	return(fibonacci(n-1) + fibonacci(n-2))
}
int main(){
	int sum, fac, fib, nro;
 	printf("Ingrese Numero: \n");
 	scanf("%d", &nro);
 	cuentaRegresivaRecursiva(nro);
 	printf("\n\n");
 	sum = sumatoria(nro);
 	fac = factorial(nro);
 	fib = fibonacci(nro);

	printf("Sumatoria(%d): %d\n", nro, sum);
	printf("Factorial(%d): %d\n", nro, fac);
 	printf("Fibonacci(%d): %d \n", nro, fib);
 	return(0);
}

```
Cambie el ejercicio de manera que se obtenga un único resultado dada una operación
elegida por el operador. De esta manera, el operador debe ingresar dos números:
primero la operación, y luego el número base para la operación:
• Si el operador ingresa 0 – salir del programa
• Si el operador ingresa 1 – Sumatoria
• Si el operador ingresa 2 – Factorial
• Si el operador ingresa 3 – Fibonacci

## Uso de parámetros en la función main
La función main recibe dos parámetros del sistema operativo al ser ejecutado. El primero es un entero que indica la cantidad de parámetros recibidos. El segundo es un vector de punteros a cadenas de caracteres con cada uno de los parámetros recibidos. El siguiente ejemplo ilustra esto:
```c
#include <stdio.h>
int main(int n, char *argv[]) {
	printf("Cantidad de parametros: %d\n", n);
 	for(int i = 0; i < n; i++) {
 		printf("argv[%d] = %s\n", i, argv[i]);
	 }
 	return 0;
}

```

Al ejecutar este programa con distinta combinación de parámetros se obtendrán distintos resultados. Ejemplos:
• main.exe -x -param2
Cantidad de parametros: 3
argv[0] = main.exe
argv[1] = -x
argv[2] = -param2
• main.exe -param1 -param2 param3 param4 a b c
Cantidad de parametros: 8
argv[0] = main.exe
argv[1] = -param1
argv[2] = -param2
argv[3] = param3
argv[4] = param4
argv[5] = a
argv[6] = b
argv[7] = c


=======
# Curso-basico-C
>>>>>>> 8085dbe4190acf700d0dcd09b8682f554135270c

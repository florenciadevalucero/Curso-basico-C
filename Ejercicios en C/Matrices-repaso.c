#define N 3
#define M 3
/*  haga una funci�n que sume un valor escalar a una matriz, retornando el resultado en
una segunda matriz:
Dividimos el programa en peque�as funciones, una va a ser para sumar una matriz
a un escalar, otra muestra en pantalla lo que ser�a la matriz
y en la funci�n main, damos valores de nuestros par�metros que son las matrices.
IMPORTANTE: en este caso, lo que hicimos fue definir constantes con los valores
de lo que iba a ser la cantidad de columnas y la cantidad de filas.
IMPORTANTE: SIEMPRE que declares matrices se debe
indicar el tama�o de filas y columnas (entre corchetes).
*/
void sumaEscalar(int mat[N][M], int escalar, int resultado[N][M])
{
    int fila, col;

    for(fila = 0; fila < N; fila++)
    {
        for(col = 0; col < M; col++)
        {
            resultado[fila][col] = mat[fila][col] + escalar;
        }
    }
} 
void mostrarMatriz(int mat[N][M])
{
    int fila, col;

    for(fila = 0; fila < N; fila++)
    {
        for(col = 0; col < M; col++)
        {
            printf(" %d ", mat[fila][col]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() 
{
    int a = 5;
    int m1[N][M] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
    };   int m2[N][M];//Prestar suma atenci�n que en la funci�n main, indicamos los valores de los
    //par�metros de las dem�s funciones

    sumaEscalar(m1, a, m2);
    mostrarMatriz(m2);

    return 0;
}

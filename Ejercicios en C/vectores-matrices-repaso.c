/*


*/
int sumaVector(int vec[], int cantElementos)
{
    int i, suma, cantelementos;
    suma = 0;
    
    printf("Ingrese la cantidad de elementos a sumar: ");
    scanf("%d", &cantelementos);
    for(i = 0; i < cantelementos; i++)
    {
        suma += vec[i];
    }

    return suma;
} 

int main()
{
	int suma, a, b;
	a = 5;
	b = canelementos; 
	
	suma = sumaVector(a, b);
	printf("El resultado es %d", suma);
	return 0;
}






#include<stdio.h>

void menu(){
	int opc;
	
	do{  //El do while lo usamos simpre que tengamos un menu, el cual tengan que elegir
		printf("\n1. Sumar");
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n5. Salir");
		printf("\nElegir una opcion: ");
		scanf("%i", &opc);
		
		
		switch(opc){
			case 1: sumar(); break;
			case 2: restar(); break;
			case 3: multiplicar(); break;
			case 4: dividir(); break;
			
		}
	}while(opc != 5);
	
	
}
void sumar(){
	int n1, n2, suma;
	
	suma = 0;
	
	printf("Ingrese dos numeros cuales quiera: ");
	scanf("%i %i", &n1, &n2);
	
	suma = n1 + n2;
	
	printf("El resutado de la suma es: %i", suma);
		
}
void restar(){
	int n1, n2, resta;
	
	resta = 0;
	
	printf("Ingrese dos numeros cuales quiera: ");
	scanf("%i %i", &n1, &n2);
	
	resta = n1 - n2;
	
	printf("El resutado de la resta es: %i", resta);
		
}
void multiplicar(){
	int n1, n2, mult;
	
	mult = 0;
	
	printf("Ingrese dos numeros cuales quiera: ");
	scanf("%i %i", &n1, &n2);
	
	mult = n1 * n2;
	
	printf("El resutado de la multiplicacion es: %i", mult);
		
}
void dividir(){
	int n1, n2, div;
	
	div = 0;
	
	printf("Ingrese dos numeros cuales quiera: ");
	scanf("%i %i", &n1, &n2);
	
	div = n1 / n2;
	
	printf("El resutado de la division es: %i", div);
		
}

int main(){
	
	menu();
	
	return 0;
}



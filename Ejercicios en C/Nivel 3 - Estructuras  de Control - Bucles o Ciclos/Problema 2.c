/*2. Digite un n�mero, si el numero supera a 10, multiplique los 10 primeros n�meros, 
sino, s�melos (Propuesto)*/

#include<stdio.h>

int main(){
	int numero,suma, mult,i;
	
	printf("Digite un numero: ");scanf("%i",&numero);
		
	i = 1;
	if(numero>10){
		while(i<=10){
			mult=mult*i;
			i++;
		}
		printf("\n La multiplicacion es: %i",mult);
	}
	else{
		while(i<=10){
			suma=suma+i;
			i++;
		}
		printf("\n La suma es: %i",suma);
	}
	
	return 0;
}

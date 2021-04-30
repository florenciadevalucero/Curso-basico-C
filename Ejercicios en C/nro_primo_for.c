//9. Determinar si un numro es primo o  no


#include<stdio.h>


int main(){
	int i, numero, divisores=0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero);
	
	for(i=1; i<=numero; i++){
		if(numero % i== 0){
			divisores++;
		}
	}
	if(divisores>2){
		printf("\n El numero es compusto");
	}
	else{
		printf("\n El numero es primo");
	}
	
	
	
	
	return 0;
}

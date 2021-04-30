/* determinar si un numero es primo o no. */


#include<stdio.h>


int main(){
	
	int  numero, final;
	
	printf("Ingrese hasta el numero que desee saber: ");
	scanf("%i", &numero);
	
	
	for(numero = 0; numero <= final; numero++){
		if(numero % numero ==0){
			printf("El numero es primo");
	}
		else{
			printf("El numero no es primo");
		}

	}
	
	
	
	
	return 0;
}

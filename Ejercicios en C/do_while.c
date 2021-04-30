/* Repetecion: El bucle do.... while

		Sintaxis:
		
		 		do{
		 			instrucciones...
		 	}while(condicion)  //primero lo que queremos que haga y lugo la condicion //
*/


//mostrar los primeros 10 numeros
//saludo

#include<stdio.h>


/*int main(){
	int i;
	
	i = 1;
	
	do{
		printf("%i. \n", i);
		i++;
	}while(i<=10);
	
	
	
	return 0;
} */

// saludo

int main(){
	char opc;
	
	
	
	do{
		fflush(stdin);
		printf("Hola FAERCHICHUCHIS");
		printf("\nigite 's' para que lo salude nuevamente: ");
		scanf("%c", &opc);
		
	}while( opc == 's' || opc == 'S');
	
	
	return 0;
}


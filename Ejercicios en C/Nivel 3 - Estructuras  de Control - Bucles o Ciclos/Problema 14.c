/*Repticion: El blucle do...while
	sintaxis:
			do{                
				Ínstrucciones...                ACTUA y LUEGO PIENSA MUY UTIL PARA MENUS
            }while(condicion)
            */


/*Mostrar los 10 primeros
 #include<stdio.h>

int main(){
	int i;
	
	i = 1;
	
	do{
		printf("%i.\n",i);
		i ++;
	}while(i <= 10);
	
	return 0;
}
*/

/*Saludo
int main(){
	char opc;
	
	do{
		fflush(stdin);        PARA VACIAR LA MEMORIA DEL BAFER
		printf("Hola");
		printf("\nDigite 's' para saludar nuevamente: ");
		scanf("%c", &opc);
	}while(opc == 's' || opc == 'S'); 

	return 0;
}
*/



//14. Hacer un bucle do...while para imprimir las letras minusculas del alfabeto

#include<stdio.h>

int main(){
	char letra = 'a';
	
	do{
		printf("%c.\n",letra);
		letra++;		
	}while(letra <= 'z');

	return 0;
} 

/* 12. Serie fibonacci // se suman los ultimos dos numeros//
*/

#include<stdio.h>


int main(){
	int numero, i, x, y, z;
	
	x = 0;
	y = 1;
	z = 1;
	
	printf("Digite el numero de elementos: ");
	scanf("%i", &numero);
	
	printf("1, ");
	
	for(i = 1; i <= numero; i++){
		z = x + y;
		x = y;
		y = z;
		
		printf("%i , ",z);
	}
	
	
	return 0;
}

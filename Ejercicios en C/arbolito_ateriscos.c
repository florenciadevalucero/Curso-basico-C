//8. Hacer un arbolito con ateriscos


#include<stdio.h>

int main(){
	int i;
	char numeral = '*';
	
	
	for(i=1; i<=7; i++){
		if(i==1){
			printf("%c",numeral);
		}
		if(i==2){
			printf("\n%c %c %c", numeral, numeral, numeral);
		}
		if(i==3){
			printf("\n%c %c %c %c", numeral, numeral, numeral, numeral);
		}
		if(i==4){
			printf("\n%c %c %c %c %c", numeral, numeral, numeral, numeral, numeral);
		}
		if(i==5){
			printf("\n%c %c %c %c %c %c", numeral, numeral, numeral, numeral, numeral, numeral);
		}
		if(i==6){
			printf("\n%c %c %c %c %c %c %c", numeral, numeral, numeral, numeral, numeral, numeral, numeral);
		}
		if(i==7){
			printf("\n%c %c %c %c %c %c %c %c", numeral, numeral, numeral, numeral, numeral, numeral, numeral, numeral);
		}
}
	
	
	return 0;
}

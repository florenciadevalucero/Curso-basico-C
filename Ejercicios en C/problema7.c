/*7. Una tienda ofrece un descuento del 15% sobre el total de la compra 
y un cliente desea saber cuánto deberá pagar finalmente por su compra. */


#include<stdio.h>

int main(){
	
	float pago,descuento, total;
	
	
	printf("Ingrese cuanto cuesta la compra: ");
	scanf("%f",&pago);
	
	
	descuento = (pago * 15)/100;
	total = pago - descuento;
	printf("El total de su compra con el descuento es: $%.2f",total);
	
	
	
	return 0;
}

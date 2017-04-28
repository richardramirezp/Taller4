#include<stdio.h>

void intercambio(int, int);

int main(){
    
    int num1, num2;
	intercambio(num1,num2);
	return 0;
}

void intercambio(int num1, int num2){
	
	int aux;
	num1=10,num2=15;
	
	printf("El valor almacenado en num1 es: %d\n",num1);
	printf("El valor almacenado en num2 es: %d\n",num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("Ahora el nuevo valor de num1 es: %d\n",num1);
	printf("Ahora el nuevo valor de num2 es:%d\n ",num2);	
}

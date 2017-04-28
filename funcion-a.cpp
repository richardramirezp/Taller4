#include <stdio.h>

float mult(float a, float b);

int main() {
    
    int x,y;
    printf("El valor de la multiplicacion es: %0.2f", mult(x,y));
	return 0;
}
float mult(float a, float b){
    
    float multiplicacion;
    
    printf("Porfavor, Ingrese los numeros a multiplicar\n");
    scanf("%f %f", &a, &b);
    
    multiplicacion = a*b;
    return multiplicacion;
}
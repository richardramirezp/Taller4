#include <stdio.h>
#include <math.h>

float al_cuadrado(float a);

int main() {
    
    int x;
    printf("El valor de la potencia es: %0.2f", al_cuadrado(x));
	return 0;
}
float al_cuadrado(float a){
    
    float potencia;
    
    printf("Porfavor, Ingrese el numero que quiere elevar al cuadrado\n");
    scanf("%f", &a);
    
    potencia = pow(a,2);
    return potencia;
}
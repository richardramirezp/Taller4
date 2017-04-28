#include <stdio.h> 

double fraccion(double a);

int main() { 
    
    int x;
    printf("El decimal es: %lf", fraccion(x));

    return 0; 
} 

double fraccion(double numero){
    
    int entero; 
    
    printf(" Ingrese numero con parte decimal usando el punto como separador: \n"); 
    scanf ("%lf", &numero); 
    entero = numero; 
    numero = numero - entero;
    return numero;
}
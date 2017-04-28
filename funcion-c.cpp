#include <stdio.h>
#include <math.h>

int funpot(int a, int b);

int main() {
    
    int x,y;
    printf("El valor de la potencia es: %d", funpot(x,y));
	return 0;
}
int funpot(int a, int b){
    
    int potencia;
    
    printf("Porfavor, Ingrese el numero que quiere elevar\n");
    scanf(" %d", &a);
    printf("Porfavor, Ingrese la potencia\n");
    scanf("%d", &b);
    
    potencia = pow(a,b);
    return potencia;
}
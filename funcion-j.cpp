/*
Programa:
Autor:
Fecha:
Resumen:
*/

#include<stdio.h>

void PedirDatos();
int SumaDelVector(int A[],int);
int A[100],tamano;

int main(){
	PedirDatos();
	printf("\nLa suma es: %d ",SumaDelVector(A,tamano));
	
	return 0;
}

void PedirDatos(){
	
	printf("Ingrese numero el tamaño del vector: \n");
	scanf("%d", &tamano);
	
	for(int i = 0; i < tamano; i++){
		printf("Posicion %d: ",i+1);
		scanf("%d", &A[i]);
	}
}

int SumaDelVector(int A[],int tamano){
	int suma=0;
	
	for(int i=0;i<tamano;i++){
		suma += A[i];
	}
	return suma;
}

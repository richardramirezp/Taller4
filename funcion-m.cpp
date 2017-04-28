/*
Nombre:
Autor:
Fecha:
Resumen:
*/
#include<stdio.h>

void PedirDatos();
void ImpresionImpares(int vector[],int);

int tamano,vector[100];

int main(){
	
	PedirDatos();
	ImpresionImpares(vector,tamano);
	
	return 0;
}

void PedirDatos(){
	
	printf("Digite el tamanio del vector: ");
	scanf("%d",&tamano);
	
	for(int i=0;i<tamano;i++){
		printf("Posicion %d:  ",i+1,". Digite un numero: ");
		scanf("%d",&vector[i]);
	}
}

void ImpresionImpares(int vector[],int tamano){
	
	int VectorImpares[100];
	int j=0;
	for(int i=0;i<tamano;i++){
		if(vector[i]%2!=0){
			VectorImpares[j] = vector[i];
			j++;
		}
	}
	
	printf("\nLos elementos impares del vector: ");
	for(int i=0;i<j;i++){
		printf("%d ", VectorImpares[i] ," ");
	}
}

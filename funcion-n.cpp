/*
Nombre:
Autor:
Fecha:
Resumen:
*/
#include<stdio.h>
using namespace std;

void PedirDatos();
void Simetria(int A[][100],int,int);

int A[100][100],filas,columnas;

int main(){
	
	PedirDatos();
	Simetria(A,filas,columnas);

	return 0;
}

void PedirDatos(){
	
	printf("Digite el numero de filas: ");
	scanf("%d",&filas);
	printf("Digite el numero de columnas: ");
	scanf("%d",&columnas);
	
	for(int f=0;f<filas;f++){
		for(int c=0;c<columnas;c++){
			printf("Digite Valor en la posicion[%d][%d]: ",f,c);
			scanf("%d",&A[f][c]);
		}
	}
}

void Simetria(int A[][100],int filas,int columnas){
	
	int cont = 0;
	
	if(filas==columnas){

		for(int f=0;f<filas;f++){
			for(int c=0;c<columnas;c++){
				if(A[f][c]==A[f][c]){
					cont++;
				}
			}
		}
	}
	
	if(cont == filas*columnas){
		printf("\nLa matriz es Simetrica");
	}
	else{
		printf("\nLa matriz NO es simetrica");
	}
}

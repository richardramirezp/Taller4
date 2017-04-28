/*
Programa:
Autor:
Fecha:
Resumen:
*/

#include <stdio.h>
#include <stdlib.h>

#define fils 3
#define cols 3

void Menu();
void LlenarMatriz(int [fils][cols]);
void MostrarMatriz(int [fils][cols]);
void FilaMenorDeMatriz(int [fils][cols]);

int main(){
    Menu();
    return 0;
}

void Menu(){
	
    int opc, cont = 0;
    int matriz[fils][cols];
    do{
        printf("*************************MENU****************************\n");
        printf("*                         *                             *\n");
		printf("*     1. Llenar Matriz    *     3. Menor Fila Matriz    *\n");
        printf("*     2. Mostrar Matriz   *     0. Salir                *\n");
		printf("*                         *                             *\n");
		printf("*********************************************************\n");
        scanf("%d", &opc);
        
		if(cont > 0){
            switch(opc){
            case 1: LlenarMatriz(matriz);
                cont++;
                break;
            case 2: MostrarMatriz(matriz);
                break;
            case 3: FilaMenorDeMatriz(matriz);
                break;
            case 0: exit(0);
                break;
            default: printf("Numero Incorrecto \n");
                break;
            }
        }else{
            switch(opc){
            case 1: LlenarMatriz(matriz);
                cont++;
                break;
            case 0: exit(0);
                break;
            default: printf("Numero Incorrecto \n");
                break;
            }
        }
        system("pause");
        system("cls");
    }while(opc!= 0);
}

void LlenarMatriz(int matriz[fils][cols]){
    
	int f, c;
    for(f = 0; f < fils; f++){
        for(c = 0; c < cols; c++){
            printf("\nIngrese un valor en la posicion [%d][%d]: ",f,c);
            scanf("%d", &matriz[f][c]);
        }
    }
}
void MostrarMatriz(int matriz[fils][cols]){
    
	fflush(stdin);
    int f, c;
    for(f = 0; f < fils; f++){
        for(c = 0; c < cols; c++){
            printf("%d   ", matriz[f][c]);
        }
        printf("\n");
    }
}
void FilaMenorDeMatriz(int matriz[fils][cols]){
    
	int c, fila, Menor;
    printf("\nIngrese el numero de la fila: ");
    scanf("%d", &fila);
    if(fila < fils){
        Menor = matriz[fila][0];
        for(c = 1; c < cols; c++){
            if(matriz[fila][c] < Menor){
                Menor = matriz[fila][c];
            }
        }
    }else{
        printf("Numero Incorrecto\n");
		FilaMenorDeMatriz(matriz);
    }
    fflush(stdin);
    printf("\nEl menor valor de la fila es %d\n", Menor);
    MostrarMatriz(matriz);
}

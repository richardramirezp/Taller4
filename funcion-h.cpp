/*
Programa:
Autor:
Fecha:
Resumen:
*/

#include<stdio.h>

void Tiempo(int,int&,int&,int&);

int main(){
	
	int TotalSeg,Horas,Minutos,Segundos;
	
	printf("Digita la cantidad de segundos: \n");
	scanf("%d",&TotalSeg);
		
	Tiempo(TotalSeg,Horas,Minutos,Segundos);
	
	printf("Horas: %d \n",Horas);
	printf("Minutos: %d \n",Minutos);
	printf("Segundos: %d \n",Segundos);
	
	return 0;
}

void Tiempo(int TotalSeg,int& Horas,int& Minutos,int& Segundos){	
	
	Horas = TotalSeg/3600;
	TotalSeg %= 3600;
	Minutos = TotalSeg/60;
	Segundos = TotalSeg%60; 
}


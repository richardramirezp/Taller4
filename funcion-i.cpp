/*
Programa:
Autor:
Fecha:
Resumen:
*/

#include<stdio.h>

void Calc_Anos(int,int&,int&,int&);

int main(){
	
	int TotDias,Ano,Mes,Dia;
	
	printf("Ingrese el numero de dias: \n ");
	scanf("%d", &TotDias);
	
	Calc_Anos(TotDias,Ano,Mes,Dia);
	
	printf("Fecha Actual: %d/%d/%d  ",Dia+1,Mes+1,Ano+2000);	
	
	return 0;
}

void Calc_Anos(int TotDias,int& Ano,int& Mes,int& Dia){
	Ano = TotDias/365;
	TotDias %= 365;
	Mes = TotDias/30;
	Dia = TotDias%30;
}


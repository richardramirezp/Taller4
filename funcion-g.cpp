/*
Programa:
Autor:
Fecha:
Resumen:
 */
#include<stdio.h>
 
void Cambio(int,int&,int&,int&,int&,int&,int&);
 
int main(){
	int numero,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
 
	printf("Digite un Valor en dolares:  ");
	scanf("%d", &numero);
	Cambio(numero,cien,cincuenta,veinte,diez,cinco,uno);
 
	printf("Cantidad de billetes a entregar: \n\n" );
	printf("Cien: %d \n",cien);
	printf("Cincuenta: %d \n",cincuenta);
	printf("Veinte: %d \n",veinte);
	printf("Diez: %d \n",diez);
	printf("Cinco: %d \n",cinco);
	printf("Uno: %d \n",uno);
 
	return 0;
}
 
void Cambio(int numero,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
 
	cien = numero/100;
	numero %= 100;
	cincuenta = numero/50;
	numero %= 50;
	veinte = numero/20;
	numero %= 20;
	diez = numero/10;
	numero %= 10;
	cinco = numero/5;
	uno = numero%5;
}

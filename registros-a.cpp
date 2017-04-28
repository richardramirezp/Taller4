/*
*NOMBRE:COMPETIDOR
*AUTOR:Richard Ramirez Patiño
*FECHA:25/Abril/2017
*Resumen:se ingresan los datos del competidor y luego se imprimen tods sus datos
         y la categoria en la cual competira.
*/

#include<stdio.h>

struct Competidor{
	
	char Nombre[20];
	int Edad;
	char Sexo[20];
	char Club[20];
	
}Usuario1;

int main(){
	
	
	char categoria[20];
	
	printf("-----Ingrese datos del Participante---\n");
	printf("\nIngrese Nombre: "); fgets(Usuario1.Nombre,20,stdin);
	printf("Ingrese Edad: "); scanf("%d", &Usuario1.Edad);
	fflush(stdin);
	printf("Ingrese su sexo: "); fgets(Usuario1.Sexo,20,stdin);
	
	printf("Ingrese Nombre del Club: "); scanf("%s", &Usuario1.Club,20);
	
	fflush(stdin);

	printf("\n--DATOS DEL PARTICIPANTE--\n");
	printf("\nNombre: %s",Usuario1.Nombre);
	printf("\nEdad: %d",Usuario1.Edad);
	printf("\nSexo: %s",Usuario1.Sexo);
	printf("\nClub: %s",Usuario1.Club);
	printf("\nCategoria: ");
	
	if(Usuario1.Edad <= 15){
		printf(" Infantil");
	}
	else if(Usuario1.Edad <= 40){
		printf(" Joven");
	}
	else{
		printf(" Mayor");
	}
	return 0;
}


/*
Nombre:
Autor:
Fecha:
Resumen:
*/
#include<stdio.h>

struct Fecha{
	int dia,mes,ano;
}fecha1,fecha2;

void PedirDatos();
Fecha Mayor(Fecha,Fecha);
void MostrarFechaMayor(Fecha);

int main(){
	
	PedirDatos();
	Fecha x = Mayor(fecha1,fecha2);
	MostrarFechaMayor(x);	
	
	return 0;
}

void PedirDatos(){
	
	printf("Digite la Fecha1 (DD/MM/AAAA): ");
	
	printf("Dia: "); scanf("%d",&fecha1.dia);
	printf("Mes: "); scanf("%d",&fecha1.mes);
	printf("Año: "); scanf("%d",&fecha1.ano);
	
	printf("\n\nDigite la Fecha2 (DD/MM/AAAA): ");
	
	printf("Dia: "); scanf("%d",&fecha2.dia);
	printf("Mes: "); scanf("%d",&fecha2.mes);
	printf("Año: "); scanf("%d",&fecha2.ano);
}

Fecha Mayor(Fecha f1,Fecha f2){
	Fecha MayorFecha;

	if(fecha1.ano == fecha2.ano){

		if(fecha1.mes ==fecha2.mes){

			if(fecha1.dia == fecha2.dia){
				printf("\nAmbas fechas son iguales");
			}
			else if(fecha1.dia > fecha2.dia){
				MayorFecha = fecha1;
			}
			else{
				MayorFecha = fecha2;
			}
		}
		else if(fecha1.mes > fecha2.mes){
			MayorFecha = fecha1;
		}
		else{
			MayorFecha = fecha2;
		}
	}
	else if(fecha1.ano > fecha2.ano){
		MayorFecha = fecha1;
	}
	else{
		MayorFecha = fecha2;
	}
	
	
	return MayorFecha;
}

void MostrarFechaMayor(Fecha x){
	printf("\nMostrando fecha mayor: %d/%d/%d",x.dia,x.mes,x.ano);
}

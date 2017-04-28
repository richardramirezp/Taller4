
#include <stdio.h>
#include <stdlib.h>

struct Promedio{
	
	float Nota1;
	float Nota2;
	float Nota3;
};

struct Alumno{
	
	char Nombre[30];
	char Sexo;
	int Edad;
	struct Promedio promed;
	
}alumnos[100];

int main(){
	
	int Num,PromedioMayor=0;
	float PromedioAlumno[100],Mayor=0;
	
	printf("Ingrese Numero de alumnos: ");
	scanf("%d",&Num);
	
	for(int i=0;i<Num;i++){
		fflush(stdin);
		
		printf("\nIngrese Nombre: "); 
		fgets(alumnos[i].Nombre,30,stdin);
		printf("\nIngrese m => masculino o f => femenino: ");
		scanf("%c", &alumnos[i].Sexo);
		printf("\nIngrese edad: ");
		scanf("%d", &alumnos[i].Edad);
		
		system("cls");
	
		printf("---Notas del Examen----\n");
		printf("\nNota1: "); 
		scanf("%f", &alumnos[i].promed.Nota1);
		printf("\nNota2: "); 
		scanf("%f", &alumnos[i].promed.Nota2);
		printf("\nNota3: "); 
		scanf("%f", &alumnos[i].promed.Nota3);
		
		system("cls");
	
		PromedioAlumno[i] = (alumnos[i].promed.Nota1+alumnos[i].promed.Nota2+alumnos[i].promed.Nota3)/3;
		
		if(PromedioAlumno[i] > Mayor){
			Mayor = PromedioAlumno[i];
			PromedioMayor = i;
		}
	}
	printf("\n---El Alumno con Mejor Promedio es---\n");
	printf("\nNombre: %s ",alumnos[PromedioMayor].Nombre);
	printf("\nSexo: %c ",alumnos[PromedioMayor].Sexo);
	printf("\nEdad: %d ",alumnos[PromedioMayor].Edad);
	printf("\nPromedio: %0.2f\n",PromedioAlumno[PromedioMayor]);
return 0;
}

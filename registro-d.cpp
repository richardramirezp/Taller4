#include <stdio.h>
#include <stdlib.h>
#define l 3

struct Promedio{
    float Notas[l], PromedioAlumnos;
};

struct Alumno{
    char Nombre[30];
    char Sexo;
    int Edad;
    Promedio NotasAlumno;
    
}Estudiante;

void Menu();
void PedirDatos(); 
void ImprimirDatos(); 

int main(){
	
    Menu();
    return 0;
}

void Menu(){
	
    int opcion;
    
    do{
        printf("%p", &Estudiante);
        printf("\n----MENU----\n");
        printf("\n1. Pedir Datos");
        printf("\n2. Imprimir Datos");
        printf("\n0. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
           
            case 1: PedirDatos(); 
                break;
            
            case 2: ImprimirDatos(); 
                break;
            case 0: exit(0);
                break;
            default: printf("\nOpcion Invalidad\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void PedirDatos(){ 

    fflush(stdin);
    int i, suma = 0;
    
    printf("\nIngrese Nombre: ");
    fgets(Estudiante.Nombre, 30, stdin);
    printf("\nIngrese M => masculino o F => femenino: ");
    scanf("%c", &Estudiante.Sexo);
    printf("\nIngrese edad: ");
    scanf("%d", &Estudiante.Edad);
    
    for(i = 0; i < l; i++){
    	
        printf("Ingrese nota %d:\n ", i + 1);
        scanf("%f", &Estudiante.NotasAlumno.Notas[i]);
        suma = suma + Estudiante.NotasAlumno.Notas[i];
    }
    Estudiante.NotasAlumno.PromedioAlumnos = suma / l;
}

void ImprimirDatos(){ 
    int i;
    printf("\nNombre: %s", Estudiante.Nombre);
    printf("\nSexo: %c", Estudiante.Sexo);
    printf("\nedad: %d", Estudiante.Edad);
    for(i = 0; i < l; i++){
        printf("\nNota %d: %0.2f\n", i + 1, Estudiante.NotasAlumno.Notas[i]);
    }
    printf("\nPromedio: %0.2f\n", Estudiante.NotasAlumno.PromedioAlumnos);
}


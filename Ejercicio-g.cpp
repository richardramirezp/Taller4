#include <stdio.h>
#include <stdlib.h>
#define l 3

struct Tiempo{
    int horas, minutos, segundos;
};

struct Almacenamiento{
    float valor;
    char unidad[5];
};

struct Music{
    char artista[30];
    char titulo[30];
    Tiempo duracion;
    Almacenamiento tamano;
};

void menu();
void pedirDatos(Music [l]);
void imprimirDatos(Music [l]);
void buscarDatos(Music [l]);

int main(){
    menu();
    return 0;
}

void menu(){
    Music mp3[l];
    int opcion;
    do{
        printf("\n---MENU---\n");
        printf("\n1. Ingresar Datos");
        printf("\n2. Mostrar Datos");
        printf("\n3. Buscar Datos");
        printf("\n0. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1: pedirDatos(mp3);
                break;
            case 2: imprimirDatos(mp3);
                break;
            case 3: buscarDatos(mp3);
                break;
            case 0: exit(0);
                break;
            default: printf("\nOpcion invalida\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void pedirDatos(Music mp3[l]){
    int i;
    for(i = 0; i < l; i++){
        fflush(stdin);
        printf("\nIngrese Artista: ");
        fgets(mp3[i].artista, 30, stdin); //desde teclado
        printf("\nIngrese Titulo: ");
        fgets(mp3[i].titulo, 30, stdin); //desde teclado
        printf("\nIngrese Tiempo asi(hh mm ss): ");
        scanf("%d", &mp3[i].duracion.horas); //pedir horas
        scanf("%d", &mp3[i].duracion.minutos); //pedir horas
        scanf("%d", &mp3[i].duracion.segundos); //pedir horas
        printf("\nIngrese Tamano sin especificar la unidad: ");
        scanf("%f", &mp3[i].tamano.valor);
        printf("\nIngrese Unidad teniendo en cuenta: ");
        printf("\nIngrese: \nKB -> Kilobytes\n MB -> Megabytes\nGB -> Gigabytes\nTB -> Terabytes");
        printf("\nIngrese la sigla de la unidad deseada: ");
        fflush(stdin);
        fgets(mp3[i].tamano.unidad, 5, stdin);
        printf("\nDatos Insertados con exito\n");
    }
}

void imprimirDatos(Music mp3[l]){
    int i;
    for(i = 0; i < l; i++){
        printf("\nArtista: %s", mp3[i].artista);
        printf("\nTitulo: %s", mp3[i].titulo);
        printf("\nTiempo: %d: %d: %d", mp3[i].duracion.horas, mp3[i].duracion.minutos, mp3[i].duracion.segundos);
        printf("\nTamano: %0.2f %s", mp3[i].tamano.valor, mp3[i].tamano.unidad);
    }
}

void buscarDatos(Music mp3[l]){
    fflush(stdin);
    int i;
    char dato[30];
    printf("Ingrese nombre Artista a buscar: ");
    fgets(dato, 30, stdin);
    for(i = 0; i < l; i++){
        if(mp3[i].artista == dato){
            printf("\nEncontrado");
            printf("\Artista: %s", mp3[i].artista);
            printf("\nTitulo: %s", mp3[i].titulo);
            printf("\nTiempo: %d: %d: %d", mp3[i].duracion.horas, mp3[i].duracion.minutos, mp3[i].duracion.segundos);
            printf("\nTamano: %0.2f %s", mp3[i].tamano.valor, mp3[i].tamano.unidad);
            break;
        }else{
            printf("\nArtista no encontrado");
        }
    }
}

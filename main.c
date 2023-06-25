//como estamos más cómodas en C pues eso
#include <stdio.h>
#include <temas.h>
#define MAX_NOMBRE_TEMA 20

struct tema{
    char nombre[MAX_NOMBRE_TEMA];
    int intermitencia;
};

void imprimir_lista(list temas){
    printf("imprimimos la lista de temas que toca repasar\n");
    int num = 1;
    for(pos i = first(temas); !end(temas, i); i = next(temas, i)){ //TODO tienen que imprimirse solo los que toca repasar hoy
        struct tema *actual = get(temas, i);
        printf("%d : %s\n", num, actual->nombre);
        num++;
    }
}

int actualizar_temas(list temas){
    printf("introduce cómo te ha salido cada tema\n ");
    printf("(0: mal\t 1: bien\t 2: salir)\n\n");
    //bucle sobre la lista imprimiendo el título y esperando el resultado
    return 0;
}

int actualizar_lista(list temas){
    printf("¿quieres añadir algún tema?\n");
    return 0;
}

int main(){

    list temas = init_list();
    int sesion = 0;

    while(1){
        sesion++;
        printf("sesión nº %d\n", sesion);
        imprimir_lista(temas);
        actualizar_temas(temas);
        actualizar_lista(temas);
    }

}
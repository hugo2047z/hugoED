#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() {
    int a;
    printf("\n     MENU \n");
    printf("Seleccione una opcion: \n");
    printf("1 para reservar memoria\n");
    printf("2 para asignar valores aleatorios\n");
    printf("3 para imprimir valores\n");
    printf("4 para liberar memoria\n");
    printf("5 para salir del menu\n");
    scanf("%d", &a);
    return a;
}

int * reservaMemoria(void){
    int *Ptrtemp;
    int n;
    printf("ingresa cuantas variables tendra tu vector:  ");
    scanf("%d", &n);
    Ptrtemp=(int*)malloc(sizeof(int) * n);
    if(Ptrtemp==NULL){
        printf("no se reservo memoria");
    }
    return Ptrtemp;
}

void asignar(int *Ptr, int tam) {
    for (int i = 0; i < tam; i++) {
        *(Ptr + i) = rand() % 6 + 5;  
    }
}

void imprimir(int *Ptr, int tam) {
    printf("\nContenido del vector:\n");
    for (int i = 0; i < tam; i++) {
        printf("posicion %d = %d\n", i, *(Ptr + i));
    }
}

int main() {
    int a;
    int *Ptr = NULL;

    srand(time(NULL));

    do {
        a = menu();
        switch (a) {
            case 1:
                Ptr=reservaMemoria();
                break;

            case 2:
                asignar(Ptr, 5);
                break;

            case 3:
                imprimir(Ptr, 5);
                break;

            case 5:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\ningrese una opcion valida.\n");
                break;
        }

    } while (a != 5);

    free(Ptr);
    return 0;
}
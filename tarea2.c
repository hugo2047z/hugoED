#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Punto{
    int x, y;
};

int menu() {
    int opcion;
    printf("\n     MENU \n");
    printf("1. ingresar valores para los puntos\n");
    printf("2. imprimir distancias\n");
    printf("3. salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

void asignar(struct Punto *p, int tam){
    for(int i = 0; i < tam; i++){
        (*(p+i)).x = rand() % 9 + 1;
        (*(p+i)).y = rand() % 9 + 1;
    }
}

void imprimir(struct Punto *p, int tam){
    int dx, dy;
    float d,may=0;

    printf("\ndistancias entre puntos:\n");

    for(int i = 0; i < tam; i++){
        for(int j = i + 1; j < tam; j++){

            dx = (*(p+j)).x - (*(p+i)).x;
            dy = (*(p+j)).y - (*(p+i)).y;

            d = sqrt(dx*dx + dy*dy);

            printf("Distancia entre P%d(%d,%d) y P%d(%d,%d) = %.2f\n",
                   i, (*(p+i)).x, (*(p+i)).y,
                   j, (*(p+j)).x, (*(p+j)).y,
                   d);
            
            if(may<d){
                may=d;
            };
            printf("distancia mayor: %.2f", may);
        }
    }
}

int main(){
    struct Punto *punto = NULL;
    int opcion;
    int tam = 10;
    //struct Punto punto[10];

    srand(time(NULL));

    punto = (struct Punto*) malloc(sizeof(struct Punto) * tam);

    do{
        opcion = menu();

        switch(opcion){
            case 1:
                asignar(punto, tam);
                break;
            case 2:
                imprimir(punto, tam);
                break;
            case 3:
                printf("\nsaliend...\n");
                break;
            default:
                printf("\nopcion no valida\n");
                break;
        }

    }while(opcion != 3);
    free(punto);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Alumno{
    char nombre[100];
    int calif[5][5];
};

int main(){
    struct Alumno A[5];

    srand(time(NULL));

    for(int k = 0; k < 5; k++){
        printf("Ingrese el nombre del alumno %d: ", k+1);
        fgets(A[k].nombre, sizeof(A[k].nombre), stdin);

        for(int j = 0; j < 5; j++){
            for(int i = 0; i < 5; i++){
                A[k].calif[j][i] = rand()%10 + 1;
            }
        }
    }

    for(int k = 0; k < 5; k++){
        printf("\nAlumno %d Nombre: %s", k+1, A[k].nombre);

        for(int j = 0; j < 5; j++){
            printf("Materia %d:  ", j+1);
            for(int i = 0; i < 5; i++){
                printf("%d ", A[k].calif[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}
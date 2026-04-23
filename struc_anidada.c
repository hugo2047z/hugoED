#include <stdio.h>
#include <stdlib.h>

struct Dato{
    int d;
    struct Dato *Ptrsig;
};

int menu() {
    int a;
    printf("\n     MENU \n");
    printf("Seleccione una opcion: \n");
    printf("1 para crear dato\n");
    printf("2 para mostrar\n");
    printf("3 para liberar\n");
    printf("4 para salir\n");
    scanf("%d", &a);
    return a;
}

struct Dato * nuevoDato(void){
    struct Dato *Ptrtemp;
    int dato;
    Ptrtemp=(struct Dato*)malloc(sizeof(struct Dato));
    if(Ptrtemp == NULL){
        return NULL;
    }
    else{
        scanf("%d", &dato);
        Ptrtemp->d=dato;
        Ptrtemp->Ptrsig=NULL;
        return Ptrtemp;
    }
}

int main(){
    int a;
    struct Dato *Ptr=NULL;
    struct Dato *Ptrtemp=NULL;
    struct Dato *Ptraux=NULL;
    do {
        a = menu();
        switch (a) {
            case 1:
                Ptrtemp=nuevoDato();
                if(Ptrtemp == NULL){
                    printf("no se reservo memoria");
                }
                else if (Ptr == NULL){
                        Ptr=Ptrtemp;
                }
                else{
                    Ptraux=Ptr;
                    while(Ptraux -> Ptrsig != NULL){
                        Ptraux = Ptraux -> Ptrsig;
                        Ptraux -> Ptrsig = Ptrtemp; 
                    }
                }
                break;

            case 2:
                
                break;

            case 3:

                if(Ptr == NULL){
                    printf("no hay nada por liberar");
                }else if(Ptrtemp -> Ptrsig == NULL){
                    free(Ptrtemp);
                    Ptr=NULL;  
                }else{

                }
                break;

            case 4:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\ningrese una opcion valida.\n");
                break;
        }

    } while (a != 4);

    return 0;
}

//1.la funcion crea el nuevo mudulo y retorna la direccion de memoria, desventaja: cada que vuelve a hacerse el programa se sobreescribe ptr 
//2.mandar la direccion de la variable ptr e implementa doble apuntador para modificar ptr desde la funcion

//liberar el nodo
//tengo que eliminar al ultimo pero tengo que hacer que el penultimo apunte a nulo. a quien tengo qu buscar es al penultimo

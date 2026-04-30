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
    printf("2 para abrir el sub menu");
    printf("3 para mostrar\n");
    printf("4 para liberar\n");
    printf("5 para salir\n");
    scanf("%d", &a);
    return a;
}


int submenu() {
    int a;
    printf("\n     MENU \n");
    printf("Seleccione una opcion: \n");
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
                        printf("se reservó 1");
                }
                else{
                    Ptraux=Ptr;
                    while(Ptraux -> Ptrsig != NULL){
                        Ptraux = Ptraux -> Ptrsig;
                        //Ptraux -> Ptrsig = Ptrtemp; 
                    }
                    Ptraux -> Ptrsig = Ptrtemp; //nuevo
                    printf("reservado");
                }
                break;
            
            case 2:
                int sub;
                do{
                    sub = submenu();
                    switch (sub) {
                    case 1:
                        
                        break;

                    case 2:
                        
                        break;

                    case 3:
                        
                        break;

                    default:
                        printf("opcion invalida en submenu\n");
                    }
                    
                } while ( sub !=3 );
                break;
            
            case 3:
                if(Ptr == NULL){
                    printf("no hay nada por mostar");
                }else{
                    Ptraux=Ptr;
                    while(Ptraux != NULL){
                        printf("%d -> ", Ptraux -> d);
                        Ptraux = Ptraux-> Ptrsig;
                    }
                    printf("nulo");
                }
                break;

            case 4:

                if(Ptr == NULL){
                    printf("no hay nada por liberar");
                }else if(Ptr -> Ptrsig == NULL){
                    free(Ptr);
                    Ptr=NULL;  
                    printf("se libero todo");
                }else{
                    Ptraux=Ptr;
                    while((Ptraux -> Ptrsig) -> Ptrsig != NULL){
                        Ptraux = Ptraux -> Ptrsig;

                    }
                    free(Ptraux -> Ptrsig);
                    Ptraux -> Ptrsig =NULL;
                    printf("se libero 1");
                }
                break;

            case 5:
                printf("\nSaliendo del programa...\n");
                    while(Ptr != NULL){
                        Ptraux = Ptr;
                        Ptr = Ptraux ->  Ptrsig;
                        free(Ptraux);
                        printf("#");
                    }
                break;

            default:
                printf("\ningrese una opcion valida.\n");
                break;
        }

    } while (a != 5);

    return 0;
}

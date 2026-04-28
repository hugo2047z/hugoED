#include <stdio.h>
#include <stdlib.h>

int main(){

    int *Ptr=NULL;

    Ptr=(int*)(malloc(sizeof(int)));

    *Ptr=10;
    printf("%d\n",*Ptr); //valor malloc de ptr
    printf("%p\n", &Ptr); //direccion de memoria de ptr
    printf("%p\n",Ptr); //direccion de memoria de ptr

    free(Ptr);
    return 0;
}
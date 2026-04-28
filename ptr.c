#include <stdio.h>

int main(){
    int *Ptr,a;
    Ptr=&a;
    printf("direccion de memoria de a: %p\n", Ptr);
    *Ptr=6;
    printf("direccion de memoria de Ptr: %p\n", &Ptr);
    printf("valor de a: %d\n", *Ptr);
    return 0;
}
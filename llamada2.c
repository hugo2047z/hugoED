#include <stdio.h>

int llamada(int *Ptr){
    *Ptr=*Ptr+3;
    return *Ptr;
}

int main(){
    int a=5;
    llamada(&a);
    printf("%d\n",a);

    return 0;
}
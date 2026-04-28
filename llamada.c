#include <stdio.h>

void A(int a){
    int *Ptr;
    Ptr=&a;
    *Ptr=a;
    printf("valor de a: %d \n", a); 
}

int main(){
    A(9);
    return 0;
}
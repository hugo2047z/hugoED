#include <stdio.h>
#include <stdlib.h>

int main(){

    int *Ptr=NULL;
    int a=5;
    Ptr=(int*)(malloc(sizeof(int)*5));

    //for(int i=0; i<a; i++){
      //  Ptr[i]=i+1;
        //printf("%d ", Ptr[i]);
    //}
    for(int i=0; i<a; i++){   //aritmetica de apuntador
        *(Ptr+i)=i+1;
        printf("%d ", *Ptr);
    }

    free(Ptr);
    return 0;
}
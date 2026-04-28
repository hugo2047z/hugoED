#include <stdio.h>

int main() {
    int n,menor=300, mayor=0;
    int a[50];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < (n); i++) {
        if(a[i]>mayor){
            mayor=a[i];
        }else if(a[i]<menor){
            menor=a[i];
        }
    }
    printf("%d %d", mayor, menor);
    return 0;
}
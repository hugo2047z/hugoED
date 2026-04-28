#include <stdio.h>

int main() {
    int N,k;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < N; i++) {
        if (a[i]%k == 0) {
            printf("%d ", a[i]);
        }else{
            printf("X ");
        }
    }
    return 0;
}
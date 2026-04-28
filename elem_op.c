#include <stdio.h>

int main() {
    int N,r=0;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < (N/2); i++) {
        r=a[i]+a[(N-1)-i];
        printf("%d ", r);
    }
    return 0;
}
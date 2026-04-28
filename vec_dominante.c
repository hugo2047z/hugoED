#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int resultado = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) {
            resultado = 0;
            break;
        }
    }

    printf("%d\n", resultado);

    return 0;
}
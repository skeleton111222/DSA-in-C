#include <stdio.h>

int main() {
    int i, j, n, coef = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

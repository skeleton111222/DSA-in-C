#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // Print stars
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

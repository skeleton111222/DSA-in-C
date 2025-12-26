#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // Print stars or hollow
        for (j = 1; j <= 2*i - 1; j++) {
            if (i == n || j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

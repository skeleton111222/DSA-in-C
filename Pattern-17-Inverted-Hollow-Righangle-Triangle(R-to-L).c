#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        
        // Print stars or hollow
        for (j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

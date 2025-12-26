#include <stdio.h>

int main() {
    int n, i, top = 0, bottom, left = 0, right, num = 1;
    scanf("%d", &n);
    bottom = right = n - 1;

    int a[10][10];

    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++)
            a[top][i] = num++;
        top++;

        for (i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        for (i = right; i >= left; i--)
            a[bottom][i] = num++;
        bottom--;

        for (i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

void TOH(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    TOH(n - 1, from, to, aux);
    printf("Move disk %d from %c to %c\n", n, from, to);
    TOH(n - 1, aux, from, to);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    TOH(n, 'A', 'B', 'C');

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    i = n;
    j = 0;
    while (i > 0)
    {
        k = i % 2;
        j = j * 10 + k;
        i = i / 2;
    }
    printf("The binary equivalent of %d is %d", n, j);
    return 0;
}

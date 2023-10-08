#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("The number of digits in the number is: %d", count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("The highest common factor of %d and %d is %d", a, b, hcf);
    return 0;
}

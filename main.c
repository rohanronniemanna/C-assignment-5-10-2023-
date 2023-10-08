
#include <stdio.h>

void printDiamond(int n) {
    int space;
    for (int i = 0; i < n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (space = 0; space <= 2 * i; space++)
            printf("* ");

        printf("\n");
    }

    for (int i = n - 1; i > 0; i--) {
        for (space = 0; space <= n - i; space++)
            printf(" ");

        for (space = 1; space < 2 * i; space++)
            printf(" *");

        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);
    printDiamond(n);
    return 0;
}

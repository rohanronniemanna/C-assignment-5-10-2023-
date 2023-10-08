
#include <stdio.h>
void print_hello_world(int n) {
    if (n == -1) {
        return;
    }
    printf("Hello, World!\n");
    print_hello_world( n- 1);
}

int main() {
    int n;
    printf("Enter the number of times to print Hello world : ");
    scanf("%d", &n);
    print_hello_world(n);
    return 0;
}
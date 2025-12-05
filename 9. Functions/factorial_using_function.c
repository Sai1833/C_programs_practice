#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factorial = %d\n", factorial(num));
    return 0;
}

#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main() {
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("%d^%d = %d\n", b, e, power(b, e));
    return 0;
}

#include <stdio.h>

#define DEBUG 1

int main() {
    int a = 10, b = 20;
    int sum = a + b;

#ifdef DEBUG
    printf("Debug Mode: a = %d, b = %d\n", a, b);
#endif

    printf("Sum = %d\n", sum);

    return 0;
}

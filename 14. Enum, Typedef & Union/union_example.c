#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;
    printf("After assigning int: d.i = %d\n", d.i);

    d.f = 3.14f;
    printf("After assigning float: d.f = %.2f\n", d.f);
    printf("Now d.i (overwritten, garbage) = %d\n", d.i);

    d.ch = 'A';
    printf("After assigning char: d.ch = %c\n", d.ch);

    return 0;
}

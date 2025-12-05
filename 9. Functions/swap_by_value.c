#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function (swapped): a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);

    swap(x, y);
    printf("Inside main (not swapped): x = %d, y = %d\n", x, y);

    return 0;
}

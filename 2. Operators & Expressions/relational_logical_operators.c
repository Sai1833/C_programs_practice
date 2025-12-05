#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Relational operators:\n");
    printf("a < b : %d\n", a < b);
    printf("a > b : %d\n", a > b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    printf("\nLogical operators:\n");
    printf("(a && b) : %d\n", (a && b));
    printf("(a || b) : %d\n", (a || b));
    printf("!(a) : %d\n", !a);

    return 0;
}

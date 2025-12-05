#include <stdio.h>
int main() {
    int a, b;
    char op;

    printf("Enter expression (like 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': printf("Result = %d\n", a / b); break;
        default: printf("Invalid operator");
    }
    return 0;
}

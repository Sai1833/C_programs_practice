#include <stdio.h>

int main() {
    char source[100], target[100];
    int i;

    printf("Enter a string: ");
    gets(source);

    for (i = 0; source[i] != '\0'; i++)
        target[i] = source[i];

    target[i] = '\0';

    printf("Copied string = %s\n", target);
    return 0;
}

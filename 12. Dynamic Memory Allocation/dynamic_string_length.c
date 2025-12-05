#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int length = 0;

    str = (char*) malloc(100 * sizeof(char));

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    printf("Length = %d\n", length);

    free(str);
    return 0;
}

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("input.txt", "r");
    dest = fopen("copy.txt", "w");

    if (src == NULL) {
        printf("Source file not found\n");
        return 1;
    }

    if (dest == NULL) {
        printf("Cannot create destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully\n");
    return 0;
}

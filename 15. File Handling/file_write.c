#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter text to write: ");
    scanf(" %[^\n]", text);   // reads full line

    fprintf(fp, "%s\n", text);
    fclose(fp);

    printf("Data written successfully\n");
    return 0;
}

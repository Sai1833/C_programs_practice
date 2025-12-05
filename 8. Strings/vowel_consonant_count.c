#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    return 0;
}

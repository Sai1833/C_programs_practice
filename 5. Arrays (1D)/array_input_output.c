#include <stdio.h>

int main() {
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array elements are: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

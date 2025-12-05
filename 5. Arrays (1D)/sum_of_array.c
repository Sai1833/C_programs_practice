#include <stdio.h>

int main() {
    int a[100], n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of array = %d\n", sum);
    return 0;
}

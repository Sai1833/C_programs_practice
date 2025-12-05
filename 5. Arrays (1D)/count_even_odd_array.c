#include <stdio.h>

int main() {
    int a[100], n, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Count = %d\n", even);
    printf("Odd Count = %d\n", odd);

    return 0;
}

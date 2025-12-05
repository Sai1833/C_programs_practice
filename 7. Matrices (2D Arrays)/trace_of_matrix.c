#include <stdio.h>

int main() {
    int a[10][10], n, trace = 0;

    printf("Enter order of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j)
                trace += a[i][j];
        }

    printf("Trace of matrix = %d\n", trace);
    return 0;
}

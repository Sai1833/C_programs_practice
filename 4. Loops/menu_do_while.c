#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n1. Hello\n2. Welcome\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
    } while (choice != 3);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main() {
    int a[10], i, n, in, pos, choice;

    printf("Enter the limit of the array (max 10): ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Array size exceeds the limit of 10.\n");
        exit(0);
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n >= 10) {
                    printf("Array is full, cannot insert more elements.\n");
                    break;
                }
                printf("Enter the element to be inserted: ");
                scanf("%d", &in);
                printf("Enter the position to insert (1 to %d): ", n + 1);
                scanf("%d", &pos);

                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position.\n");
                } else {
                    for (i = n; i >= pos; i--) {
                        a[i] = a[i - 1];
                    }
                    a[pos - 1] = in;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                printf("Enter the position to be deleted (1 to %d): ", n);
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid position.\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
                printf("Current array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d\t", a[i]);
                }
                printf("\n");
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
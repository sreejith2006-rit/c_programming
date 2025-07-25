#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int choice, element;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert element\n");
        printf("2. Delete last element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int *newArr = malloc((size + 1) * sizeof(int));
                if (newArr == NULL) {
                    printf("Memory allocation failed.\n");
                    exit(1);
                }

                for (int i = 0; i < size; i++) {
                    newArr[i] = arr[i];
                }

                printf("Enter element to insert: ");
                scanf("%d", &element);
                newArr[size] = element;

                free(arr);
                arr = newArr;
                size++;
                printf("Element inserted.\n");
                break;
            }

            case 2: {
                if (size == 0) {
                    printf("Array is already empty.\n");
                } else {
                    int *newArr = NULL;
                    if (size > 1) {
                        newArr = malloc((size - 1) * sizeof(int));
                        if (newArr == NULL) {
                            printf("Memory allocation failed.\n");
                            exit(1);
                        }

                        for (int i = 0; i < size - 1; i++) {
                            newArr[i] = arr[i];
                        }
                    }

                    free(arr);
                    arr = newArr;
                    size--;
                    printf("Last element deleted.\n");
                }
                break;
            }

            case 3:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                free(arr);
                printf("Memory freed. Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

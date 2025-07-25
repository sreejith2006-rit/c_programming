#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int ch, el, index;

    while (1) {
        printf("\nWELCOME\n");
        printf("1. Insert at the end\n");
        printf("2. Insert at any index\n");
        printf("3. Delete from last\n");
        printf("4. Delete element at specified index\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        int *newarr = NULL;

        switch (ch) {
        case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &el);
            newarr = (int *)malloc((size + 1) * sizeof(int));
            if (arr != NULL) {
                for (int i = 0; i < size; i++) {
                    newarr[i] = arr[i];
                }
                free(arr);
            }
            newarr[size] = el;
            arr = newarr;
            size++;
            printf("SUCCESS\n");
            break;

        case 2:
            printf("Enter the index to be inserted: ");
            scanf("%d", &index);
            if (index < 0 || index > size) {
                printf("Invalid index!\n");
                break;
            }
            printf("Enter the element: ");
            scanf("%d", &el);
            newarr = (int *)malloc((size + 1) * sizeof(int));
            for (int i = 0, k = 0; k < size + 1; k++) {
                if (k == index)
                    newarr[k] = el;
                else
                    newarr[k] = arr[i++];
            }
            free(arr);
            arr = newarr;
            size++;
            printf("Successfully inserted!\n");
            break;

        case 3:
            if (size == 0) {
                printf("Array is empty!\n");
                break;
            }
            newarr = (int *)malloc((size - 1) * sizeof(int));
            for (int i = 0; i < size - 1; i++) {
                newarr[i] = arr[i];
            }
            free(arr);
            arr = newarr;
            size--;
            printf("Successfully deleted!\n");
            break;

        case 4:
            printf("Enter the index to be deleted: ");
            scanf("%d", &index);
            if (size == 0 || index < 0 || index >= size) {
                printf("Invalid operation!\n");
                break;
            }
            newarr = (int *)malloc((size - 1) * sizeof(int));
            for (int i = 0, k = 0; i < size; i++) {
                if (i == index)
                    continue;
                newarr[k++] = arr[i];
            }
            free(arr);
            arr = newarr;
            size--;
            printf("Successfully deleted!\n");
            break;

        case 5:
            if (size == 0) {
                printf("Array is empty!\n");
                break;
            }
            printf("Array elements: [");
            for (int i = 0; i < size; i++) {
                printf("%d", arr[i]);
                if (i != size - 1) printf(", ");
            }
            printf("]\n");
            break;

        case 6:
            printf("PROGRAM OVER\n");
            free(arr); // Clean up memory on exit
            exit(0);

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }

    return 0;
}

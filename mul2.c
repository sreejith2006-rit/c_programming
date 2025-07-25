#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr1, **arr2, **arr3;
    int m, n, p, q;

    printf("Enter the order of matrix 1: ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of matrix 2: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrices cannot be multiplied!\n");
        return -1;
    }

    // Allocate and input arr1
    arr1 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        arr1[i] = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);

    // Allocate and input arr2
    arr2 = (int **)malloc(p * sizeof(int *));
    for (int i = 0; i < p; i++)
        arr2[i] = (int *)malloc(q * sizeof(int));

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &arr2[i][j]);

    // Allocate arr3
    arr3 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        arr3[i] = (int *)malloc(q * sizeof(int));

    // Multiply
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < n; k++)
                arr3[i][j] += arr1[i][k] * arr2[k][j];
        }

    // Show result
    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", arr3[i][j]);
        printf("\n");
    }

    return 0;
}

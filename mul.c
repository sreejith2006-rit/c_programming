#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **arr1=NULL, **arr2=NULL, **arr3=NULL;
    int m, n, p, q;
    printf("Enter the order of matrix 1 :");
    scanf("%d %d", &m, &n);
    printf("Enter the order of matrix 2 :");
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("Matrices cannot be multiplied!!!!");
        return -1;
    }

    printf("Enter the elements of matrix 1 :");
    arr1 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        arr1[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2 :");
    arr2 = (int **)malloc(p * sizeof(int *));
    for (int i = 0; i < p; i++)
    {
        arr2[i] = (int *)malloc(q * sizeof(int));
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    arr3 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        arr3[i] = (int *)malloc(q * sizeof(int));
    }
    printf("Matrix 3\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
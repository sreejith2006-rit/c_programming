#include <stdio.h>
struct sparse
{
    int row, col, value;
};
void convert(struct sparse a[], int arr[][100], int m, int n)
{
    int i, j, k = 1;
    a[0].row = m;
    a[0].col = n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                a[k].row = i;
                a[k].col = j;
                a[k].value = arr[i][j];
                k++;
            }
        }
    }
    a[0].value = k - 1;
    printf("Row  Column  Value\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d %-6d %-6d\n", a[i].row, a[i].col, a[i].value);
    }
}
void transpose(struct sparse a[], struct sparse b[])
{
    int k = 1;
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = a[0].value;
    for (int i = 0; i < a[0].col; i++)
    {
        for (int j = 1; j <= a[0].value; j++)
        {
            if (i == a[j].col)
            {
                b[k].row = a[j].col;
                b[k].col = a[j].row;
                b[k].value = a[j].value;
                k++;
            }
        }
    }
    printf("Transpose :\n");
    printf("Row  Column  Value\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d %-6d %-6d\n", b[i].row, b[i].col, b[i].value);
    }
}
int main()
{
    int arr[100][100];
    struct sparse a[100], b[100];
    int m, n;
    printf("Enter the no of rows & cols :");
    scanf("%d %d", &m, &n);
    printf("Enter the values :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    convert(a, arr, m, n);
    transpose(a, b);

    return 0;
}
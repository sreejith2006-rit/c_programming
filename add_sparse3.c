#include <stdio.h>
struct sparse
{
    int row, col, value;
};
int convert(struct sparse a[], int arr[][100], int m, int n)
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
    return k;
}
void add(struct sparse a[], struct sparse b[], struct sparse c[], int k1, int k2)
{
    int i = 1, j = 1, k = 1;
    while (i < k1 && j < k2)
    {
        if (a[i].row < b[j].row || a[i].row == b[j].row && a[i].col < b[j].col)
        {
            c[k++] = a[i];
            i++;
        }
        else if (a[i].row > b[j].row || a[i].row == b[j].row && a[i].col > b[j].col)
        {
            c[k++] = b[j];
            j++;
        }
        else
        {
            c[k].row = a[i].row;
            c[k].col = b[j].col;
            c[k].value = a[i].value + b[j].value;
            k++;
            i++;
            j++;
        }
    }
    while (i < k1)
    {
        c[k++] = a[i];
        i++;
    }
    while (j < k2)
    {
        c[k++] = b[j];
        j++;
    }
    printf("Row  Column  Value\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d %-6d %-6d\n", c[i].row, c[i].col, c[i].value);
    }
}
int main()
{
    int arr[100][100], brr[100][100];
    struct sparse a[100], b[100], c[100];
    int m, n, p, q;
    printf("Enter the no of rows & cols of matrix 1:");
    scanf("%d %d", &m, &n);
    printf("Enter the no of rows & cols of matrix 2 :");
    scanf("%d %d", &p, &q);
    if (m != p || n != q)
    {
        printf("Matrices cannot be added!!!!");
        return -1;
    }
    printf("Enter the values of Matrix 1:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the values of Matrix 2:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    int k1 = convert(a, arr, m, n);
    int k2 = convert(b, brr, p, q);
    add(a, b, c, k1, k2);
    return 0;
}
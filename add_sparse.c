#include <stdio.h>
struct p
{
    int row, col, value;
};
int sparse(int arr[][100], int r, int c, struct p a[])
{
    a[0].row = r;
    a[0].col = c;
    int k = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
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
    printf("ROW COLUMN VALUE\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d%-6d%-6d\n", a[i].row, a[i].col, a[i].value);
    }
    return k;
}
void addsp(struct p a[], int m, struct p b[], int l, struct p c[])
{
    int i = 1, j = 1, k = 1;
    while (i < m && j < l)
    {
        if (a[i].row < b[j].row || a[i].row == b[j].row && a[i].col < b[j].col)
        {
            c[k++] = a[i++];
        }
        else if (b[j].row < a[i].row || b[j].row == a[i].row && b[j].col < a[i].col)
        {
            c[k++] = b[j++];
        }
        else
        {
            int sum = a[i].value + b[j].value;
            if (sum != 0)
            {
                c[k].row = a[i].row;
                c[k].col = a[i].col;
                c[k].value = sum;
                k++;
            }
            i++;
            j++;
        }
    }
    while (i < m)
    {
        c[k++] = a[i++];
    }
    while (j < l)
    {
        c[k++] = b[j++];
    }
    c[0].row = a[0].row;
    c[0].col = a[0].col;
    c[0].value = k - 1;

    printf("ROW COLUMN VALUE\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d%-6d%-6d\n", c[i].row, c[i].col, c[i].value);
    }
}
int main()
{
    int arr[100][100], brr[100][100];
    struct p a[100], b[100], c[100];
    int r, d, f, t;
    printf("Enter the no of rows and columns of Matrix 1 :");
    scanf("%d %d", &r, &d);
    printf("Enter the no of rows and columns of Matrix 2 :");
    scanf("%d %d", &f, &t);
    if (r != f || d != t)
    {
        return 1;
    }
    printf("Matrix 1:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Enter the elements :\n");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix 2 :\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("Enter the elements :\n");
            scanf("%d", &brr[i][j]);
        }
    }
    int k = sparse(arr, r, d, a);
    int l = sparse(brr, f, t, b);
    addsp(a, k, b, l, c);
    return 0;
}
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
void transpose(struct p a[], int k, struct p b[])
{
    int n = a[0].col;
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = a[0].value;
    int p=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (i == a[j].col)
            {
                b[p].row = a[j].col;
                b[p].col = a[j].row;
                b[p].value=a[j].value;
                p++;
            }
        }
    }
    printf("ROW COLUMN VALUE\n");
    for (int i = 0; i < k; i++)
    {
        printf("%-6d%-6d%-6d\n", b[i].row, b[i].col, b[i].value);
    }
}
int main()
{
    int arr[100][100];
    struct p a[100], b[100];
    int r, c;
    printf("Enter the no of rows and columns :");
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the elements :\n");
            scanf("%d", &arr[i][j]);
        }
    }
    int k = sparse(arr, r, c, a);
    printf("TRANSPOSE :\n");
    transpose(a, k, b);
    return 0;
}
#include <stdio.h>
struct mat
{
    int row;
    int col;
    int value;
};
void display(struct mat arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i].row);
        printf("%d ", arr[i].col);
        printf("%d ", arr[i].value);
        printf("\n");
    }
}
void bubblesort(struct mat b[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i - 1; j++)
        {
            if (b[j].row > b[j + 1].row ||
                (b[j].row == b[j + 1].row && b[j].col > b[j + 1].col))
            {
                struct mat t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }
}
int main()
{
    int arr[100][100];
    struct mat a[100], b[100];
    int m, n;
    printf("enter the rows and cols :");
    scanf("%d%d", &m, &n);
    printf("Enter a sparse Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
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
    a[0].row = m;
    a[0].col = n;
    a[0].value = k - 1;
    display(a, k);
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = a[0].value;
    for (int i = 1; i < k; i++)
    {
        b[i].row = a[i].col;
        b[i].col = a[i].row;
        b[i].value = a[i].value;
    }
    bubblesort(b, k);
    printf("Transpose :\n");
    display(b, k);
    return 0;
}
#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            (i + j) % 2 != 0 ? printf("%d ", 0) : printf("%d ", 1);
        }
        printf("\n");
    }

    return 0;
}
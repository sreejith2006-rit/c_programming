#include <stdio.h>
int main()
{
    int n = 5;
    int v = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= v - 2 * i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
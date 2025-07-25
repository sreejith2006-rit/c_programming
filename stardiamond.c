#include <stdio.h>
int main()
{
    int n = 101;
    int ut = (n + 1) / 2;
    int lt = (n - 1) / 2;
    int y = lt;
    for (int i = 0; i < ut; i++)
    {
        for (int k = 0; k < ut - i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= (2 * i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < lt; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * y - 1; k++)
        {
            printf("*");
        }
        y--;
        printf("\n");
    }

    return 0;
}
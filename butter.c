#include <stdio.h>
int main()
{
    int n = 40;
    int t = n - 1;
    int o = 2 * n - 1;
    for (int i = 1; i <= o; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t - i; j++)
        {
            printf("*");
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            printf(" ");
        }
        for (int p = 0; p < t - i; p++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
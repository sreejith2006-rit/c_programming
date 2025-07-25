#include <stdio.h>
int main()
{
    int n = 3;
    int f = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == f || j ==f)
            {
                printf("*");
                
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
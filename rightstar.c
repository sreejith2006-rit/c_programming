#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf(" ");
        }
        int f=65;
        for (int k = 0; k < i; k++)
        {
            printf("%c",f);
            f++;
        }
        printf("\n");
    }

    return 0;
}
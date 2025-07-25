#include <stdio.h>
int main()
{
    int n = 5;
    int t = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * t-1; k++)
        {
            printf("*");
           
        }
    t--;
    printf("\n");
    }

    return 0;
}
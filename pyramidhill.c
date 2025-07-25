#include <stdio.h>
int main()
{
    int n = 5;
    int t = n;
    int i = 1;
    int h = 1;
    while (n)
    {
        for (int k = 0; k < t - h; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
        n--;
        i++;
        h++;
    }
    return 0;
}
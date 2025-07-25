#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int k = 65;
        int f = 1;
        for (int j = 1; j <= 2 * i; j += 2)
        {
            if (i % 2 != 0)
            {
                printf("%d ", f);
                f++;
            }
            else
            {
                printf("%c ", k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}
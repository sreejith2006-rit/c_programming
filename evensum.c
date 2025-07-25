#include <stdio.h>
int main()
{
    int n = 1134;
    int t = n;
    int e_sum = 0;
    int c = 0;
    while (n)
    {
        n /= 10;
        c += 1;
    }
    if (c % 2 == 0)
    {
        for (int i = 1; i <= c; i++)
        {
            if (i % 2 != 0)
            {
                e_sum += t % 10;
            }
            t /= 10;
        }
    }
    else
    {
        for (int i = 1; i <= c; i++)
        {
            if (i % 2 == 0)
            {
                e_sum += t % 10;
            }
            t /= 10;
        }
    }
    printf("%d ", e_sum);
    return 0;
}
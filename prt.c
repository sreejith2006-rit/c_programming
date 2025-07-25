#include <stdio.h>
int f(int a)
{
    int pro = 1;
    for (int i = 1; i <= a; i++)
    {
        pro *= i;
    }
    return pro;
}
int c(int i, int j)
{
    return f(i) / (f(j) * f(i - j));
}
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)

    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", c(i, j));
        }
        printf("\n");
    }

    return 0;
}
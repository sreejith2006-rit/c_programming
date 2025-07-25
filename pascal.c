#include <stdio.h>
int fact(int y)
{
    int pro = 1;
    for (int i = 1; i <= y; i++)
    {
        pro *= i;
    }
    return pro;
}

int c(int n, int r)
{
    int com = fact(n) / (fact(r) * fact(n - r));
    return com;
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
            int com = c(i, j);
            printf("%d ", com);
        }
        printf("\n");
    }

    return 0;
}
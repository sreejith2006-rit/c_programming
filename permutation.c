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
int p(int n, int r)
{
    return c(n, r) * fact(r);
}
int main()
{
    int n, r;
    printf("enter n and r");
    scanf("%d %d", &n, &r);
    if ((n < r)||n<0||r<0)
        printf("invalid input");
    else
    {
        int per = p(n, r);
        int com = c(n, r);
        printf("permutation :%d\ncombination :%d", per, com);
    }

    return 0;
}
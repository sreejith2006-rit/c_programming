#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("THE GREATEST NO IS :%d", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("THE GREATEST NO IS :%d", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("THE GREATEST NO IS :%d", c);
    }
    else
    {
        printf("THE GREATEST NO IS :%d", d);
    }

    return 0;
}
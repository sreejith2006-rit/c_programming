#include <stdio.h>
#include <math.h>
int main()
{
    int n = 12345;
    int t=n;
    int c = 0;
    while (n)
    {
        n /= 10;
        c++;
    }
    int rev = 0;
    for (int i = 1; i <= c; i++)
    {
        rev += t % 10;
        t/=10;
    }
    printf("%d", rev);
    return 0;
}
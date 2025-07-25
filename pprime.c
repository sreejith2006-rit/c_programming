#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int f;
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        f = 0;
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    (f == 0) ? printf("prime") : printf("not prime");
    return 0;
}
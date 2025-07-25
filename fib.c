#include <stdio.h>
int main()
{
    int x = -1, y = 1;
    int z, i, n;
    printf("enter the no of terms");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        z = x + y;
        printf("%d,", z);
        x = y;
        y = z;
    }

    return 0;
}
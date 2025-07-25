#include <stdio.h>
int main()
{
    float a;
    printf("enter the percentage");
        scanf("%f", &a);
    if (a > 100.0)
        printf("enter valid percentage");
    else if (a >= 90.0)
        printf("S");
    else if (a >= 80.0)
        printf("A");
    else if (a >= 70.0)
        printf("B");
    else if (a >= 60.0)
        printf("C");
    else if (a >= 50.0)
        printf("D");
    else
        printf("F");
    return 0;
}
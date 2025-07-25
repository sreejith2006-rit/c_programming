#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    int t = 1;
    while (t)
    {
        printf("menu driven calculator\n");
        printf("1.addition\n");
        printf("2.subtraction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("5.power\n");
        printf("6.sqrt\n");
        printf("7.exit\n");
        printf("enter the opton\n");
        scanf("%d", &c);

        if (c == 7)
            break;
        else if (c == 6)
        {
            printf("entre the no\n");
            scanf("%d", &a);
        }
        if (c == 1)
        {
            printf("enter the no\n");
            scanf("%d", &a);
            printf("enter the no");
            scanf("%d", &b);
            printf("the sum of %d and %d is %d\n", a, b, a + b);
        }
        else if (c == 2)
        {
            printf("enter the no\n");
            scanf("%d", &a);
            printf("enter the no");
            scanf("%d", &b);
            printf("the difference of %d and %d is %d\n", a, b, a - b);
        }
        else if (c == 3)
        {
            printf("enter the no\n");
            scanf("%d", &a);
            printf("enter the no");
            scanf("%d", &b);
            printf("the product of %d and %d is %d\n", a, b, a * b);
        }
        else if (c == 4)
        {
            printf("enter the no\n");
            scanf("%d", &a);
            printf("enter the no");
            scanf("%d", &b);
            printf("the division of %d and %d is %f\n", a, b, (float)a / b);
        }
        else if (c == 5)
        {
            printf("enter the no\n");
            scanf("%d", &a);
            printf("enter the no");
            scanf("%d", &b);
            printf("the power of %d raised to %d is %d\n", a, b, pow(a, b));
        }
        else if (c == 6)
            printf("the sqrt of %d is %f\n", a, sqrt(a));

        else
            printf("invalid \n");
    }

    return 0;
}
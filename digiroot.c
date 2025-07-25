#include <stdio.h>
int digiroot(int n)
{
    
    while (1)
    {   int rem = 0;
        while (n != 0)
        {
            rem += n % 10;
            n /= 10;
        }
        if(rem>=10) n=rem;
        else {
            printf("the digiroot is:%d",rem);
            break;
        }
    }
}
int main()
{
    int n;
    printf("enter the no :");
    scanf("%d", &n);
    digiroot(n);
    return 0;
}
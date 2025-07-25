#include <stdio.h>
int main()
{
    int n = 5;
    int c=65;
    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {   
            printf("%c",c);
            
        }
        printf("\n");
        c++;
    }   

    return 0;
}
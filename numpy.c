#include<stdio.h>
int main()
{
int n=5;
for (int i = 0; i <n; i++)
{   
    for (int k = 0; k < n-i-1; k++)
    {
        printf(" ");
    }
    
    for (int j = 1; j <=i+1; j++)
    {
       printf("%d",j);
    }
    for (int h = i; h>=1; h--)
    {
        printf("%d",h);
    }
    
    printf("\n");
}

return 0;
}
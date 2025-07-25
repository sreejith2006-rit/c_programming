#include<stdio.h>
int main()
{
    int n=5;
for ( int i = 0; i < n; i++)

{   int f=1;
    for (int k = 0; k< n-i-1; k++)
    {
       printf(" ");
    }
    
    for (int j = 0; j <i+1; j++)
    {
        printf("%d ",f);
        f=f*(i-j)/(j+1);
    }
    printf("\n");
    
}

return 0;
}
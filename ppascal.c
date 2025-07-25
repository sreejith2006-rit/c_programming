#include<stdio.h>
int main()
{
int n=4;
for (int i = 0; i < n; i++)
{
    int f=1;
    for (int j = 0; j <=i; j++)
    {
       printf("%d ",f);
       f=f*(i-j)/(j+1);
    }
    printf("\n");
    
}

return 0;
}
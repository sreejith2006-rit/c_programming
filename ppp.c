#include<stdio.h>
int main()
{
int n;
int i;
int k;
int f;
int h;
printf("enter the no of rows");
scanf("%d",&n);
for ( i = 0; i < n; i++)

{   f=1;
    for ( h = 0; h < n-i-1; h++)
    {
        printf(" ");
    }
    
    for (k = 0; k<=i; k++)
    {
        printf("%d ",f);
        f=f*(i-k)/(k+1);
    }
 printf("\n");   
}


return 0;
}
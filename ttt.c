#include<stdio.h>
int main()
{
int m=3,n=3;
int arr[m][n];
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("enter the element :");
       scanf("%d",&arr[i][j]);
    }
    
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("%d ",arr[i][j]);
    }
    printf("\n");
    
}
for (int i = 0; i < m; i++)
{
    for (int j = i+1; j < n; j++)
    {
        int t=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=t;
    }
    
}
puts("Transpose :");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("%d ",arr[i][j]);
    }
    printf("\n");
    
}
return 0;
}
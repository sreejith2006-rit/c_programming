#include<stdio.h>
int main()
{
int m,n,p,q;
int arr[100][100],crr[100][100],brr[100][100],trr[100][100];
printf("enter the diamentions :");
scanf("%d %d %d %d",&m,&n,&p,&q);
if(n!=p){
    printf("cannot be multiplied !!!");
    return 0;
}
puts("enter the elements for array 1:");
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
puts("enter the elements for array 2:");
for (int i = 0; i < p; i++)
{
    for (int j = 0; j < q; j++)
    {
        scanf("%d",&brr[i][j]);
    }
    
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < q; j++)
    {
       crr[i][j]=0;
       for (int k = 0; k < n; k++)
       {
        crr[i][j]+=arr[i][k]*brr[k][j];
       }
       
    }
    
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < q; j++)
    {
        printf("%d ",crr[i][j]);
    }
    printf("\n");
}
printf("the transpose of array 1:\n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
       trr[i][j]=arr[j][i];
    }
    
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
       printf("%d ",trr[i][j]);
    }
    printf("\n");
    
}



return 0;
}
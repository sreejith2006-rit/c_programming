#include<stdio.h>
int main()
{
int m=3;
int n=3;
int el;
int arr[m][n];
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
       printf("enter the element :");
       scanf("%d",&arr[i][j]);
    }
    
}
printf("enter the element to be searched :");
scanf("%d",&el);
int s=0;
int e=m*n-1;
while (s<=e)
{
    int mid=(s+e)/2;
    int i=mid/n;
    int j=mid%n;
    if (arr[i][j]==el)
    {
        printf("%d %d",i,j);
        break;
    }
    else if (arr[i][j]>el)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    
    
}

return 0;
}
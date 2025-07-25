#include<stdio.h>
int main()
{
int arr[]={1,2,3,6,5};
int n=6;
int sum=0;
for (int i = 0; i < n-1; i++)
{
    sum+=arr[i];
}
int r=n*(n+1)/2 -sum;
printf("%d ",r);
return 0;
}
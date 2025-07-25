#include<stdio.h>
#include<limits.h>
int main()
{
int arr[]={6,6,6,6,6,6};
int n=6;
int max=INT_MIN;
int smax=INT_MIN;
for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
       smax=max;
       max=arr[i];
    }
    else if (arr[i]>smax&&arr[i]!=max)
    {   smax=arr[i];
       
    }
    
    
}
printf("%d ",smax);
return 0;
}
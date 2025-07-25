#include<stdio.h>
#include<limits.h>
int main()
{
int arr[]={5,6,4,32,4};
int smax=INT_MIN;
int max =INT_MIN;
for (int i = 0; i < 4; i++)
{
    if (max<arr[i])
    {   smax=max;
        max=arr[i];
    }
    else if (smax<arr[i] && arr[i]!=max)
    {
        smax=arr[i];
    }
    
}
printf("%d %d ",max,smax);
return 0;
}
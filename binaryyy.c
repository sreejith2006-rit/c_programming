#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7};
int el=5;
int n=7;
int s=0,e=n-1;
int mid=(s+e)/2;
while (s<=e)
{  
    if (el==arr[mid])
    {
       printf("index :%d",mid);
       break;
    }
    else if (el>arr[mid])
    {
        s=mid+1;
    }
    else e=mid-1;
    
    
}

return 0;
}
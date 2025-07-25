#include<stdio.h>
int main()
{
int arr[]={2,4,6,8,10,8,5};
int n=7;
int s=0,e=n-1;
while (s<=e)
{   int mid=(s+e)/2;
    if ((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1]))
    {
        printf("%d ",arr[mid]);
        break;
    }
    else if (arr[mid]>arr[mid-1])
    {
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    
    
}

return 0;
}
#include<stdio.h>
int main()
{
int arr[6]={1,2,3,4,5,6};
int n=6;
int s=5;
int start=0;
int end=n-1;
int f=0;
while (start<=end)
{
    int mid=(start+end)/2;
    if (arr[mid]==s)
    {
       printf("found at index %d",mid);
       f=1;
       break;

    }
    else if (arr[mid]<s)
    {
        start=mid+1;
    }
    else end=mid-1;
    
}
if (f==0)
{
    printf("element not found");
}

return 0;
}
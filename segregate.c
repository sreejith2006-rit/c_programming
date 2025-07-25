#include<stdio.h>
int main()
{
int arr[4]={0,1,1,0};
int start=0;
int end=3;
while (start<=end)
{
    if (arr[start]>arr[end])
    {
        int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;
        end--;
    }
    else if (arr[start]<arr[end])
    {
        start++;
        end--;
    }
    else{
        arr[start]==0?start++:end--;
    }
    
    
}
for (int i = 0; i < 4; i++)
{
    printf("%d ",arr[i]);
}


return 0;
}
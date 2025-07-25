#include<stdio.h>
int max(int arr[],int index){
    if (index==0)
    {
        return arr[0];
    }
    else
    {
        int m=max(arr,index-1);
        return m>arr[index]?m:arr[index];
    }
    
    
}
int main()
{
int arr[]={1,2,9,4,5};
printf("%d",max(arr,4));
return 0;
}
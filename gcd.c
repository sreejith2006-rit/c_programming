#include<stdio.h>
int sum(int arr[],int i){
    return i==-1?0:arr[i]+sum(arr,i-1);
}
int main()
{
int arr[]={1,2,3,4,5};
int n=5;
printf("%d",sum(arr,n-1));
return 0;
}
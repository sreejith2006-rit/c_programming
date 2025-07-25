#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,7,8,9};
int index;
int el=6;
int n=8;
int s=0,e=n-1;
while (s<=e)
{
   int mid=(s+e)/2;
   if (el==arr[mid])
   {
    printf("index :%d",mid);
    break;
   }
   else if(el>arr[mid]){
    s=mid+1;
   }
   else if(el<arr[mid]){
    index=mid;
    e=mid-1;
   }
   
}
if(arr[n-1]<el){
    index=n;
}
printf("%d ",index);

return 0;
}
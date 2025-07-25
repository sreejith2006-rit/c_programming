#include<stdio.h>
int main()
{
int arr[]={2,3,5,6,8,9,10,12};
int n=8;
int s=0;
int k=3;
int e=n-1;
int a;
while (s<=e)
{
   int mid=(s+e)/2;
   if (arr[mid]-mid-1>=k)
   {
         a=mid;
        e=mid-1;
   }
   else{
    s=mid+1;
   }
   
}
printf("%d ",a+k);
return 0;
}
#include<stdio.h>
int main()
{
    int i;
int n=100;
int s=1;
int e=n;
int mid=(s+e)/2;
while(s<=e){
    mid=(s+e)/2;
    if (mid*mid==n)
    {
       printf("%d",mid);
       break;
    }
    else if (mid*mid>n)
    {
        e=mid-1;
    }
    else{
         i=mid;
        s=mid+1;
    }
    
    
}
if (mid*mid!=n)
{
    printf("%d ",i);
}


return 0;
}
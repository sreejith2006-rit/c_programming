#include<stdio.h>
int linear(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==k)
        {
           return i;
        }
        
    }
    return -1;
    
}
int main()
{
int arr[100];
int n,el;
printf("enter the no of elements :");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the element to be searched :");
scanf("%d",&el);
int v=linear(arr,n,el);
printf("%d",v);
return 0;
}
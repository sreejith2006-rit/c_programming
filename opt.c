#include<stdio.h>
int main()
{
int n;
puts("enter the size of array");
scanf("%d",&n);
int arr[n];
int s=0;
for (int i = 0; i < n; i++)
{
    puts("enter the elements :");
    scanf("%d",&arr[i]);
    s+=arr[i];
}
int t_sum=(n-1)*(n)/2;
int d_num=s-t_sum;
printf("The duplicate element is: %d",d_num);
return 0;
}
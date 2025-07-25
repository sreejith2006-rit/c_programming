#include<stdio.h>
void fib(int arr[],int n){
    arr[0]=0;arr[1]=1;
    for (int i = 2; i <n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    
}
int main()
{
int n=7;
int arr[n];
fib(arr,n);
for (int i = 0; i < n; i++)
{
   printf("%d,",arr[i]);
}

return 0;
}
#include<stdio.h>
void fib(int n){
    int arr[]={1,1};
    for (int i = 2; i < n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

}
int main()
{
int n=6;
fib(n);
return 0;
}
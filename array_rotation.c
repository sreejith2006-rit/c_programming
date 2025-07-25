#include<stdio.h>
void rev(int a[],int i,int j){
    while(i<j){
        int t=a[i];
         a[i]=a[j];
         a[j]=t;
         i++;
         j--;
    }
}
int main()
{
int n;
printf("enter the no of elements of array :");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
    printf("enter the elements :");
    scanf("%d",&arr[i]);
}
int k;
printf("enter the value of to be rotated :");
scanf("%d",&k);
k=k%n;
rev(arr,0,(n-1));
rev(arr,0,k-1);
rev(arr,k,n-1);
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
return 0;
}
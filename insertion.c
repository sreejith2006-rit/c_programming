#include<stdio.h>
void swap( int a[],int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
int main()
{
int arr[5]={5,3,4,1,2};
int n=5;
int i=1;
while (i<n)
{
    for (int j = i; j > 0; j--)
    {
        if(arr[j]<arr[j-1]){
            swap(arr,j,j-1);
        }
        else{
            break;
        }
    }
    i++;
    
}
for (int i = 0; i < n; i++)
{
   printf("%d ",arr[i]);
}

return 0;
}
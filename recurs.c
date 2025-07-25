#include<stdio.h>
int sort(int arr[],int i,int n){
    if(i==n-1){
        return 1;
    }
    else{
        for (int j = 0; j < n-i-1; j++)
        {
           if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
           }
        }
        sort(arr,i+1,n);
        
    }
    
}
int main()
{
int arr[]={1,2,4,6,0,5};
int n=6;
sort(arr,0,n);
for (int i = 0; i < 6; i++)
{
    printf("%d ",arr[i]);
}

return 0;
}

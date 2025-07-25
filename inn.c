#include<stdio.h>
int main()
{
int arr[]={8,7,6,9,1,0};
int n=6;
int i=0;
while (i<n)
{
    for (int j = i; j >0; j--)
    {
        if (arr[j]<arr[j-1])
        {
           int t=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=t;
        }
        else break;
        
    }
    i++;
    
    
}

for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}

return 0;
}
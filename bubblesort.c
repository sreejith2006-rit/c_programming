#include<stdio.h>
int main()
{
int n=6;
int a[6]={6,7,5,9,3,2};
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if(a[j]>a[j+1]){
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;}
    }
    
}
for (int i = 0; i < n; i++){
    printf("%d ",a[i]);
}
return 0;
}
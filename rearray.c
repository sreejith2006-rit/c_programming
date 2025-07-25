#include<stdio.h>
int main()
{
int a[6]={1,2,3,4,5,6};
int n=6;
int i=0;
int j=n-1;
while (i<=j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
    
}

for (int i = 0; i < n; i++)
{printf("%d ",a[i]);
}


return 0;
}
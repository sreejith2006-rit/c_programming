#include<stdio.h>
int main()
{
int a[6]={3,2,4,56,7};
int n=8;
int t=0;
for (int i = 0; i < 6; i++)
{
    if(a[i]==n){
        printf("found at index %d",i);
        t=1;
        break;
    }
}
if(t==0)
    printf("not found");
return 0;
}
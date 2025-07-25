#include<stdio.h>
void swap(int*a,int*b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}
int main()
{
int a=5;
int b=7;
int*j=&a;
int*k=&b;
swap(j,k);
printf("%d %d",a,b);

return 0;
}
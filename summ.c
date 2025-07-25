#include<stdio.h>
int s(int a,int b);
int mul(int a,int b);

int main()
{
int a=6,b=15;
int sum=s(a,b);
int m=mul(a,b);
printf("%d %d",sum,m);
return 0;
}
int s(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
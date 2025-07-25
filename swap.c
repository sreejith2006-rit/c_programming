#include<stdio.h>
int main()
{
int a=3,b=4;
int c;
c=b;
b=a;
a=c;
printf("%d %d",a,b);

return 0;
}
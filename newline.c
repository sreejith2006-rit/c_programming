#include<stdio.h>
int main()
{
int x;
x=756;
int rev=0;
while (x){
    int rem=x%10;
    rev=rev*10+rem;
    x/=10;
}
printf("%d",rev);
return 0;
}
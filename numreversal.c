#include<stdio.h>
int main()
{
int rem;
int n=12345;
int t=n;
int c=0;
int rev=0;
while(n){
    n/=10;
    c++;
}
for (int i = 1; i <=c; i++)
{
    rem=t%10;
    rev=rev*10+rem;
    t/=10;
}
printf("%d",rev);
return 0;
}
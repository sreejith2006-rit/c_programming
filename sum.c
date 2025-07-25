#include<stdio.h>
int gcd(int a,int b){
    int s=a>b?b:a;
    int max=1;
    for (int i = 1; i <=s ; i++)
    {
        if(a%i==0&&b%i==0){
            max=i;
        }
    }
    return max;}
int lcm(int a,int b){
    printf("LCM :%d\n",(a*b)/gcd(a,b));
}
    

int main()
{
int a=34;
int b=17;
printf("GCD: %d\n",gcd(a,b));
lcm(a,b);
return 0;
}
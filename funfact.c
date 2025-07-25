#include<stdio.h>
unsigned long int fact(int a);
unsigned long int fact(int a){
    unsigned long pro =1;
    if (a<0)
    {
        return 0;
    }
    
    for (int i = 1; i <=a; i++)
    {
        pro*=i;
    }
    return pro;
    
}
int main()
{
int a=100;
printf("The factorial is :%lu",fact(a));
return 0;
}
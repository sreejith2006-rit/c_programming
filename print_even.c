#include<stdio.h>
int printeven(int num,int n){
    if (num >n)
    {
        return 0;
    }
    else
    {
        printf("%d\n",num);
        printeven(num+2,n);
    }
    
    
}
int main()
{
int n=5;
printeven(2,5);
return 0;
}
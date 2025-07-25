#include<stdio.h>
int power(int i,int n){
    if (n==0)
    {
        return 1;
    }
    else{
        return i*power(i,n-1);
    }
}
int main()
{
int n=6;
printf("%d",power(2,6));
return 0;
}
#include<stdio.h>
#include<math.h>
int digi(int n){
    int t=n;
    while (t>=10)
    {
        int sum=0;
        int f=log10(t)+1;
        for (int i = 0; i < f; i++)
        {
            sum+=t%10;
            t/=10;
        }
        t=sum;


        
    }
    printf("%d ",t);
    
}
int main()
{
int n=1234567891;
digi(n);
return 0;
}
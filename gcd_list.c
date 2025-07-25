#include<stdio.h>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
void hcf(int arr[],int i,int n,int Gcd){
    if (n<2)
    {
        printf("Atleast 2 numbers required");
        return;
    }
    else if (i==n)
    {
       printf("%d",Gcd);
       return;
    }
    else{
        Gcd=gcd(Gcd,arr[i]);
        hcf(arr,i+1,n,Gcd);
    }
    
    
}
int main()
{
int arr[]={2,3,5,6,7,8};
int n=6;
hcf(arr,2,n,gcd(arr[0],arr[1]));
return 0;
}
#include<stdio.h>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int hcf(int arr[],int i,int n,int g){
    if(i==n){
        return g;
    }
    else{
        g=gcd(g,arr[i]);
        return hcf(arr,i+1,n,g);
    }
}
int main()
{
int arr[]={2,4,6,8,1};
int n=5;
printf("%d",hcf(arr,2,n,gcd(arr[0],arr[1])));
return 0;
}
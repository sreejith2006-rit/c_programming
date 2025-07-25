#include<stdio.h>
int print(int n){
    int k=1;
    if (n==1)
    {
        printf("%d",n);;
    }
    else{
        printf("%d\n",n-(n-k));
        k++;
        print(n-1);
    }
    
    
}
int main()
{
int n=10;
print(n);
return 0;
}
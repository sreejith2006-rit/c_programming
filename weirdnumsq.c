#include<stdio.h>
int min(int i,int j){
    if(i>j) return j;
    else return i;
}
int main()
{
int n=9;
int a,b;
for (int i = 1; i <=2*n-1; i++)
{
   for (int j = 1; j <=2*n-1; j++){
    a=i,b=j;
    if (i>n)
    {
        a=2*n-i;
    }
    if (j>n)
    {
        b=2*n-j;
    }
    printf("%d ",n+1-min(a,b));
    
    
   }

printf("\n");
   
}

return 0;
}
#include<stdio.h>
int max(int a,int b){
   if (a>b)
   {
    return a;
   }
   else{
    return b;
   }
   
}
int main()
{
int a,b,c;
scanf("%d %d %d ",a,b,c);
int f=max(b,c);
printf("%d ",max(a,f));
return 0;
}
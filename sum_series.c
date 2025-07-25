#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("enter the no of terms");
scanf("%d",&n);
n%2!=0?printf("%d",(n+1)/2):printf("%d",(-n)/2);
return 0;
}
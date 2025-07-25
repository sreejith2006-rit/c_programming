#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,rem;
scanf("%d",&n);
int s=ceil(log2(n+1));
int *ptr=(int*)malloc(sizeof(int)*s);
int i=0;
while (n)
{
   rem=n%2;
   *(ptr+i)=rem;
   i++;
   n/=2;
}
for ( int j = i-1; j>=0; j--)
{
    printf("%d ",ptr[j]);
}
free(ptr);

return 0;
}
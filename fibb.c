#include<stdio.h>
int main()
{
int i;
int n;
int x=-1;
int y=1;
int z;
printf("enter the no of terms \n");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
   z=x+y;
   printf("%d,",z);
   x=y;
   y=z;

}

return 0;
}
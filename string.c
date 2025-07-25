#include<stdio.h>
int main()
{
// char x='\0';
// printf("%d",x);
char a[12]="helloworld";
a[4]=32;
int i=0;
int s=0;
while (a[i]!='\0')
{
   printf("%c",a[i]);
   i++;
   s++;
   
}
printf("\n%d",s);

return 0;
}

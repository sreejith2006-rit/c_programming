#include<stdio.h>
#include<string.h>
int main()
{
char str[12]="hello world";
char a[12];
strcpy(a,str);
printf("%s",a);
return 0;
}
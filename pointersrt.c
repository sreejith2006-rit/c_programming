#include<stdio.h>
int main()
{
char s[]="string";
char* ptr=s;
*ptr='r';
puts(ptr);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
char el;
int in;
puts("enter the string :");
fgets(str,sizeof(str),stdin);
int len=strlen(str);
str[len-1]=32;
puts("enter the character  to be added");
scanf("%c",&el);
puts("enter the index :");
scanf("%d",&in);
for (int i = len-1; i>=0; i--)
{
    if(i==in){
        str[i]=el;
        break;
    }
    str[i]=str[i-1];
}
printf("%s",str);
return 0;
}
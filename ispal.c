#include<stdio.h>
#include<string.h>
int i;
int main()
{
char str[50];
puts("enter the string");
fgets(str,sizeof(str),stdin);
int len=strlen(str);
if(str[len-1]=='\n'){
    str[len-1]='\0';
    len--;
}
for (i = 0; i < len; i++)
{
    if(str[i]!=str[len-i-1]){
        break;
    }
}
if(i==len){
    printf("palindrome");
}
else{
    printf("not palindrome");
}
return 0;
}
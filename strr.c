#include<stdio.h>
#include<string.h>
int main()
{

char str[50];
char ftr[50];
puts("enter the string");
fgets(str,sizeof(str),stdin);
int len=strlen(str);
if(str[len-1]=='\n'){
    str[len-1]='\0';
    len--;
}
strcpy(ftr,str);
int i=len-1;
while (i!=-1)
{
   printf("%c",str[i]);
   i--;
}
printf("\n");
printf("%s",ftr);
int result=strcmp(ftr,str);
if(result==0){
    printf("palindrome");
}
else{
    printf("not palindrome");
}

return 0;
}
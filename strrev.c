#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char ftr[100];
fgets(str,sizeof(str),stdin);
int len=strlen(str);
str[len-1]='\0';
len--;
strcpy(ftr,str);
int i=0;
int j=len-1;
while (i<j)
{
    char t=str[i];
    str[i]=str[j];
    str[j]=t;
    i++;j--;
}
if(strcmp(str,ftr)==0){
    printf("palindrome ");
}
else{
    printf("not palindrome");
}
return 0;
}
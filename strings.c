#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
puts("enter the string :");
fgets(str,sizeof(str),stdin);
printf("%d",strlen(str));
int i=0;
int len=0;
while(str[i]!='\0'){
    len++;
    i++;
}

printf("%d",len);
printf("\n");
len--;
i=0;
int j=len-1;
while(i<j){
    char t=str[i];
    str[i]=str[j];
    str[j]=t;
    i++;
    j--;
}
printf("%s",str);

return 0;
}
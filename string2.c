#include<stdio.h>
#include<string.h>
int main()
{
int n;
printf("enter the max size of string");
scanf("%d",&n);
char str[n];
getchar();
fgets(str,sizeof(str),stdin);
int len=strlen(str);
printf("%d\n",len);
if (str[len-1]=='\n')
{
    str[len-1]='\0';
}
int i=0;
int j=len-2;
while (i<j)
{
   char t=str[i];
   str[i]=str[j];
   str[j]=t;
   i++;
   j--;
}

puts(str);
return 0;
}
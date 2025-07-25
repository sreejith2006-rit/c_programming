#include<stdio.h>
#include<string.h>
int main()
{
char s[]="abcdaabcd";
int len_required=strlen(s)-1;
char str[50][50];
char st[50][50];
for (int i = 0; i <len_required; i++)
{   int k=0;
   for (int j = 0; j<=i; j++)
   {
        str[i][k]=s[j];
        k++;
   }
   if (str[i][k]!='\0')
   {
    str[i][k]='\0';
   }
   
    
}
for (int i = 0; i <len_required; i++)
{
    printf("%s\n",str[i]);
}
printf("\n");
for (int i = 0; i < len_required; i++)
{   int k=0;
   for (int j = len_required-i; j <=len_required; j++)
   {
        st[i][k]=s[j];
        k++;
   }
  
    st[i][k]='\0';
 
   
   
}

   
    

for (int i = 0; i <len_required; i++)
{
    printf("%s\n",st[i]);}
int c=0;
for (int i = 0; i < len_required; i++)
{
    if(strcmp(str[i],st[i])==0){
        int len=strlen(str[i]);
        if(c<=len){
            c=len;
        }
    }
}
printf("%d",c);

return 0;
}
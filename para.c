#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char para[1000];
printf("enter the string :");
fgets(para,sizeof(para),stdin);
int len=strlen(para);
if (para[len-1]=='\n')
{
   para[len-1]='\0';
   len--;
}
int s=0,w=0;
for (int i = 0; i < len; i++)
{
   if(i!=0){
   if((isspace(para[i])&&!isspace(para[i-1]))||((para[i]==',')&&!isspace(para[i-1]))){    
        w+=1;
   }
   if ((para[i]=='.'||para[i]=='?'||para[i]=='!')&&!isspace(para[i-1])){
    w+=1;
    
   }
   if ((para[i]=='.'||para[i]=='?'||para[i]=='!')){
    s+=1;
    
   }

   
   
}}
printf("%d %d",s,w);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
char str[]="helloworld";
int len=strlen(str);
char asc[len+1];
char count[26]={0};
for (int i = 0; i < len; i++)
{
    count[str[i]-'a']++;
}
int k=0;
for (int i = 0; i < 26; i++)
{
    char c='a'+i;
    while (count[i])
    {
        
        asc[k]=c;
        k++;
        count[i]--;
    }
    
}
asc[k]='\0';
printf("%s",asc);

return 0;
}
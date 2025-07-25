#include<stdio.h>
#include<string.h>
int main()
{
char str[]="aabbabab";
char pattern[]="ab";
int len_str=strlen(str);
int len_pattern=strlen(pattern);
for (int i = 0; i <=(len_str-len_pattern); i++)
{
    int flag=0;
    int k=i;
    for (int j = 0; j < len_pattern; j++)
    {
        if (pattern[j]!=str[k])
        {   flag=1;
            break;
        }
        else k++;
        
    }
    if (flag==0)
    {
        printf("found at index :%d\n",i);
    }
    
    
}

return 0;
}
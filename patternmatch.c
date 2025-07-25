#include<stdio.h>
#include<string.h>
int main()
{
char str[]="ababababcdababababababcd";
char p[]="abcd";
int  l=strlen(str);
int  li=strlen(p);
for (int i = 0; i <= l-li; i++)
{   int j;
    for (  j = 0; j < li; j++)
    {
        if(str[i+j]!=p[j]){
            break;
        }
    }
    if(j==li){
        printf("pattern found at index %d\n",i);
    }
    
    
}

return 0;
}
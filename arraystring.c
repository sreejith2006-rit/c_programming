#include<stdio.h>
#include<string.h>
int main()
{
char str[]="ababc";
char ans[10][20];
int len=strlen(str);
int i=0;
int j;
while(i<len)
{   
    for ( j = i; j<len; j++)
    {
        if (str[i]==str[j])
        {
            i++;
            break;
        }
        else{
            ans[i][20]+=str[i];
            
        }
        
    }
    
}
for ( i = 0; i <10; i++)
{   
    printf("%s",ans[i]);
}

return 0;
}
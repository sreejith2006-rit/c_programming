#include<stdio.h>
#include<string.h>
int main()
{
char str[100],pat[50];
puts("enter the string");
gets(str);
puts("enter the pattern:");
gets(pat);
for (int i = 0; i <=(strlen(str)-strlen(pat)); i++)
{   int f=0;
    int k=i;
    for (int j = 0; j < strlen(pat); j++)
    {   
        if(str[k]!=pat[j]){
            k++;
            f=1;
            break;
        }
        k++;
    }
    if(f==0) printf("%d",i);
    
}

return 0;
}
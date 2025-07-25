#include<stdio.h>
#include<string.h>
int main()
{
char str[][12]={"sree","aby","mahith","neeraj","salvin"};
int l =5;
char t[100];
char *min;
int minmin;
for (int i = 0; i <l-1 ; i++)
{   min=str[i];
   minmin=i;
    for (int j= i; j < l; j++)
    {
        if(strcmp(min,str[j])>0){
            min=str[j];
            minmin=j;
        }
    }
    
    strcpy(t,str[i]);
    strcpy(str[i],str[minmin]);
    strcpy(str[minmin],t);
}
for (int i = 0; i < l; i++)
    {
        printf("%s\n",str[i]);
    }
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
printf("%zu\n",sizeof(str));
int j,i=0;
puts("enter the string:");
fgets(str,sizeof(str),stdin);
int len= strlen(str);
if(len>49){
    printf("overflow");
    return 0;
}
else{
    
    if(str[len-1]=='\n'){
        j=len-2;
        str[len-1]='\0';
    }
    else
        j=len-1;
    while (i<j)
    {
        char t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
    
}
puts("the reversed string is: ");
printf("%s",str);
return 0;
}
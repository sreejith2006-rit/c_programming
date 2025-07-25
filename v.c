#include<stdio.h>
int count(char str[],int i,int n){
    int c=0;
    if (i==n)
    {
       return 0;
    }
    else{
        if (((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')))
        {
            c=1;
        }
        return c+count(str,i+1,n);
        
    }
    
}
int main()
{
char str[]="hello";
printf("%d",count(str,0,5));
return 0;
}
#include<stdio.h>
void rev(char str[],int start,int end){
    if (start>end)
    {
        return;
    }
    else{
        char t=str[start];
        str[start]=str[end];
        str[end]=t;
        rev(str,start+1,end-1);
    }
    
}
int main()
{
char str[]="hello";
rev(str,0,4);
printf("%s",str);
return 0;
}
#include<stdio.h>
#include<string.h>
int pali(char s[],int i,int n){
    return i>=n?1:(s[i]!=s[n])?0:pali(s,i+1,n-1);
}
int main()
{
char str[]="amma";
printf("%d",pali(str,0,strlen(str)-1));
return 0;
}
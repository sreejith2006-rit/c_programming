#include<stdio.h>
int main(){
unsigned short s;
scanf("%u",&s);
printf("%u\n",s);
printf("%zu",sizeof(s));
return 0;
}
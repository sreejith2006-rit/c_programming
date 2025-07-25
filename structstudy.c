#include<stdio.h>
struct study
{
    char name[20];
    int rno;
};

int main()
{
struct study s;
printf("%p %p",s,&s);
return 0;
}
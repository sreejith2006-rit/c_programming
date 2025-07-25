#include<stdio.h>
int p(int a,float*ar,float*p){
    *ar=3.14*a*a;
    *p=2*3.14*a;
    return 0;
}
int main()
{
int r=3;
float area,peri;
p(r,&area,&peri);
printf("%f %f",area,peri);
return 0;
}
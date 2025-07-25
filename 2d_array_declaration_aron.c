#include<stdio.h>
int main()
{
int arr[2][2][2]={{{1,2},{3,4}},{{1,2},{3,4}}};
printf("%d",*(*(*(arr+0)+1)+1));
return 0;
}
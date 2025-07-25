#include<stdio.h>
#include<limits.h>
int main()
{
int arr[5]={5,5,3,4};
int max =INT_MIN;
int min=INT_MAX;
int smax=INT_MIN;
int smin=INT_MIN;
for (int i = 0; i < 5; i++)
{
  if(max<arr[i]){
    smax=max;
    max=arr[i];
  }

  else if (((smax<=arr[i])&&(arr[i]!=max)))
  {
    smax=arr[i];
  }
}
printf("max:%d\n",max);

printf("smax:%d\n",smax);

return 0;
}
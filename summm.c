#include<stdio.h>
#include<math.h>
int main()
{
int arr[]={5,10,3,2,50,80};
int n=5;
int i=0;
int j=n-1;
while (i<j)
{
    if (abs(arr[i]-arr[j])==45)
    {
        printf("(%d,%d)",arr[i],arr[j]);
        break;
    }
    else if (abs(arr[i]-arr[j])>45)
    {
       j--;
    }
    else{
        i++;
    }
    
    
}


return 0;
}
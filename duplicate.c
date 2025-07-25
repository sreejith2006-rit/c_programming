#include<stdio.h>
int main()
{
int arr[]={1,2,3,2,4,5,6};
for (int i = 0; i < 7; i++)
{
    for (int j = i+1; j<7; j++)
    {
        if(arr[i]==arr[j]){
            printf("duplicate element : %d",arr[i]);
            break;
        }
    }
    
}

return 0;
}
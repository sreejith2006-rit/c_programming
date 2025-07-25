#include<stdio.h>
int main()
{
int arr[7]={1,2,3,5,5,2,1};
for (int i = 0; i < 7; i++)
{int f=0;
    for (int j = i+1; j < 7; j++)
    {
        if (arr[i]==arr[j])
        {
            f=1;
        }
        
    }
    if (f==0)
    {
        printf("%d",arr[i]);
        break;
    }
    

    
}

return 0;
}
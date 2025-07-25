#include <stdio.h>
void rev(int a[],int i,int j){
    while (i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    
}
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rev(arr,1,4);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

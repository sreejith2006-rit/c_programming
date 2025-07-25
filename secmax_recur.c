#include <stdio.h>
int max(int arr[], int i, int n);
void secmax(int arr[], int i, int n, int s, int max);
int max(int arr[], int i, int n)
{
    return i == n - 1 ? arr[i] : (max(arr, i + 1, n) > arr[i]) ? max(arr, i + 1, n): arr[i];
}
void secmax(int arr[], int i, int n, int s, int max)
{
    if (i == n)
    {
        printf("The second max :%d", s);
        return;
    }
    else
    {
        if (arr[i] > s && arr[i] != max)
        {
            s = arr[i];
        }
        secmax(arr, i + 1, n, s, max);
    }
}

int main()
{   int i;
    int n;
    int arr[20];
    printf("enter the no of elements :");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        printf("enter the element %d :",i+1);
        scanf("%d",&arr[i]);
    
    }
    secmax(arr, 0, n, arr[0], max(arr, 0, n));
    return 0;
}
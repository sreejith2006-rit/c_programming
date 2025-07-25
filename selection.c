#include <stdio.h>
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int mind = i;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                mind = j;
            }
           
        }
        int t = arr[i];
        arr[i] = arr[mind];
        arr[mind] = t;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
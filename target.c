#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int f = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                f = 1;
            }
        }
        if (f == 0)
        break;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
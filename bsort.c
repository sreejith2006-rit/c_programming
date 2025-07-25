#include <stdio.h>
int main()
{
    int arr[9] = {4, 5, 6, 7, 8, 9, 3, 2, 1};
    int n = 9;
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
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
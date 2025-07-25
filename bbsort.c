#include <stdio.h>
int main()
{
    int arr[5] = {5, 7, 3, 9, 10};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int t = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = t;
            }
            else break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
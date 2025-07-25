#include<stdio.h>
int main()
{
    int arr[3][3];
    int m = 3, n = 3;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    puts("Transpose :");
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
           int k=0;
           int l=m-1;
           while (k<l)
           {
            int t=arr[i][k];
            arr[i][k]=arr[i][l];
            arr[i][l]=t;
            k++;l--;
           }
           
        }
        
    }
    puts("Rotated Matrix :");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
           int k=0;
           int l=m-1;
           while (k<l)
           {
            int t=arr[i][k];
            arr[i][k]=arr[i][l];
            arr[i][l]=t;
            k++;l--;
           }
           
        }
        
    }
    puts("Rotated Matrix :");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    
return 0;
}
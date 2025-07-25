#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m, n;
    printf("Enter the no of rows & columns  :");
    scanf("%d %d", &m, &n);
    int **arr=(int **)malloc(sizeof(int*)*m);
    for (int i = 0; i < m; i++)
    {
        *(arr+i)=(int *)malloc(sizeof(int)*n);
    }
    printf("enter the elements :");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++) {
        free(arr[i]); // Free memory allocated for each row
    }
    free(arr); // Free memory allocated for row pointers
    
    
    
    return 0;
}
#include <stdio.h>
int main()
{
    int a[50][50], b[50][50],c[50][50];
    int m1, n1, m2, n2;
    printf("enter the diamentions of arrays");
    scanf("%d %d %d %d", &m1, &n1, &m2, &n2);
    if (n1 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("enter the elements for array 1\n");
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("enter the elements for array 2\n");
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {   c[i][j]=0;
                for (int k = 0; k < n1; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
                
            }
            
        }
        printf("array 1");
        printf("\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                
                printf("%d  ", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("array 2");
        printf("\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                
                printf("%d  ", b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("standard product");
        printf("\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                
                printf("%d  ", c[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        
        

    }

    return 0;
}
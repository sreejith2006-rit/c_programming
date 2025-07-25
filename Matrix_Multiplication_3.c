#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,p,q;
    printf("Enter the no of Rows and Colums of Matrix1 :");
    scanf("%d %d",&m,&n);
    printf("Enter the no of Rows and Colums of Matrix2 :");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix Cannot be multiplied!!!");
        return -1;
    }
    printf("Enter the elements of Matrix 1:\n");
    int **matrix1=(int **)malloc(m*sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        matrix1[i]=(int *)malloc(n*sizeof(int));
       
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           scanf("%d",&matrix1[i][j]);
        }
        
    }
    printf("Enter the elements of Matrix 2:\n");
    int **matrix2=(int **)malloc(p*sizeof(int *));
    for (int i = 0; i < p; i++)
    {
        matrix2[i]=(int *)malloc(q*sizeof(int));
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }  
    }
    int **matrix3=(int **)malloc(m*sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        matrix3[i]=(int *)malloc(q*sizeof(int));
    }
    printf("Multiplied Matrix :\n");
       for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            matrix3[i][j]=0;
            for (int k = 0; k < n; k++)
            {
               matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
        
    }
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < q; j++)
       {
        printf("%d ",matrix3[i][j]);
       }
       printf("\n");
       
    }
    return 0;
}
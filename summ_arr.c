#include <stdio.h>
#include <stdlib.h>
int main()
{   int n;
    printf("enter the no of elements :");
    scanf("%d",&n);
    int *ptr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
       printf("enter the elements :");
       scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
    
    return 0;
}
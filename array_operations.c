#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr = NULL;
    int size = 0;
    int el;
    while (1)
    {
        printf("WELCOME\n");
        printf("1.Insert at the end\n");
        printf("2.insert at any index\n");
        printf("3.delete from last\n");
        printf("4.delete element at specified index\n");
        printf("5.Display\n");
        printf("6.exit\n");
        printf("Enter your choice :");
        int ch;
        scanf("%d", &ch);
        int *newarr=NULL;
        switch (ch)
        {
        case 1:
            
            newarr = (int *)malloc((size+1) * sizeof(int));
            for (int i = 0; i < size; i++)
            {
                newarr[i] = arr[i];
            }
            free(arr);
            arr = newarr;
            size++;
            printf("Enter the element to be inserted :");
            scanf("%d", &arr[size-1]);
            printf(" SUCCESS ");
            newarr=NULL;
            break;
        case 2:
            printf("Enter the index to be inserted :");
            int index;
            int k = 0;
            scanf("%d", &index);
            newarr = (int *)malloc((size+1) * sizeof(int));
            int i = 0;
            while (i < size)
            {
                if (k == index)
                {
                  
                    printf("Enter the element :");
                    scanf("%d", &el);
                    newarr[k] = el;
                    i--;
                }
                else
                {
                    newarr[k] = arr[i];
                }
                i++;
                k++;
            }
             free(arr); 
            arr = newarr;
            size++;
            printf("Successfully inserted !!!!\n");
            newarr=NULL;
            break;
        case 3:
            
           
            if (size == 0)
            {
                return -1;
            }
             newarr = (int *)malloc((size-1) * sizeof(int));
            for (int i = 0; i < size - 1; i++)
            {
                newarr[i] = arr[i];
            }
             free(arr); 
           arr = newarr;
            printf("Successfully deleted !!!\n");
            size--;
            newarr=NULL;
            break;
        case 4:
            printf("Enter the index to be deleted :");
            scanf("%d",&index);
            if (size == 0||index<0||index>=size)
            {
                return -1;
            }
            newarr = (int *)malloc((size-1) * sizeof(int));
           i = 0;
              for (int i = 0, k = 0; i < size; i++) {
                if (i == index)
                    continue;
                newarr[k++] = arr[i];
            }
             free(arr); 
           arr=newarr;
            printf("Successfully deleted!!!\n");
            size--;
            newarr=NULL;
            break;
        case 5:
            printf("Array elements : [");
            for (int i = 0; i < size; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("]");
            break;
        case 6:
            printf("PROGRAM OVER\n");
            free(arr);
            exit(0);
        default:
            break;
        }
    }

    return 0;
}
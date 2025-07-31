#include <stdio.h>
#define size 5
int queue[size];
int f = -1;
int r = -1;
int isEmpty()
{
    if (f == -1 && r == -1)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if (r == size - 1)
    {
        return 1;
    }
    return 0;
}
void enQueue(int item)
{
    if (isFull())
    {
        printf("Queue is already full");
    }
    else
    {
        if (f == -1)
            f = 0;
        queue[++r] = item;
    }
}
void deQueue()
{
    if (isEmpty())
    {
        printf("Queue is Empty");
    }
    else
    {
        if (f > r)
        {
            f = -1;
        }
        else
        {
            printf("Element Removed :%d", queue[f++]);
        }
    }
}
void display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d ", queue[i]);
    }
}
int main()
{
    while (1)
    {
        printf("Enter your  choice for a queue of 5\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        int ch;
        printf("Enter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            int item;
            printf("Enter the item :");
            scanf("%d", &item);
            enQueue(item);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }

    return 0;
}
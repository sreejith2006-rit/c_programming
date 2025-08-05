#include <stdio.h>
#define n 5
int dcq[n];
int f = -1, r = -1;
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
    if (f == (r + 1) % n)
    {
        return 1;
    }
    return 0;
}
void insertrear(int el)
{
    if (isFull())
    {
        printf("The queue is FUll!!");
    }

    else if (isEmpty())
    {
        f = 0;
        r = 0;
        dcq[f] = el;
    }
    else
    {
        r = (r + 1) % n;
        dcq[r] = el;
    }
}
int deletefront()
{
    if (isEmpty())
    {
        printf("The queue is Empty !!!");
        return -1;
    }
    else
    {
        int item = dcq[f];
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f = (f + 1) % n;
        }
        return item;
    }
}
void insertfront(int el)
{
    if (isFull())
    {
        printf("The Queue is Full!!!");
    }
    else if (isEmpty())
    {
        f = r = 0;
        dcq[f] = el;
    }
    else if (f == 0)
    {
        f = n - 1;
        dcq[f] = el;
    }
    else
    {
        f--;
        dcq[f] = el;
    }
}
int deleterear()
{
    if (isEmpty())
    {
        printf("The queue is empty!!!");
    }
    else
    {
        int item = dcq[r];
        if (f==r)
        {
            f = r = -1;
        }
        else
        {
            if (r == 0)
                r = n - 1;
            else
                r--;
        }
        return item;
    }
}
int main()
{

    return 0;
}
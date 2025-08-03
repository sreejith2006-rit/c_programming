#include <stdio.h>
#define n 5
int f = -1, r = -1;
int cq[n];
void encq(int el)
{
    if (f == (r + 1) % n)
    {
        printf("Cq is full!!!\n");
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
            cq[r]=el;
        }
        else
        {
            r = (r + 1) % n;
            cq[r] = el;
        }
    }
}
int decq()
{
    int item;
    if (f == -1 && r == -1)
    {
        printf("The q is empty");
        return -1;
    }
    else
    {
        if (f == r)
        {
            item = cq[f];
            f = -1;
            r = -1;
        }
        else
        {
            item = cq[f];
            f = (f + 1) % n;
        }
    }
    return item;
}
int main()
{
    encq(10);
    encq(20);
    encq(30);
    encq(40);
    encq(50);

    printf("Dequeued: %d\n", decq());
    printf("Dequeued: %d\n", decq());
    encq(60); // Should succeed
    encq(70); // Should succeed

    // Print remaining queue contents
    while (!(f == -1 && r == -1)) {
        printf("Dequeued: %d\n", decq());
    }

    return 0;
}
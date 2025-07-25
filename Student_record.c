#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    float m1, m2, m3, m4, m5;
    float total;
};
void sort(struct student *, int);
int main()
{
    int n;
    printf("Enter the no of Students :");
    scanf("%d", &n);
    getchar();
    struct student *ptr = (struct student *)malloc(n * sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student %d :\n", i + 1);
        printf("Name :");
        fgets((ptr + i)->name, sizeof((ptr + i)->name), stdin);
        int len = strlen(((ptr + i)->name));
        ((ptr + i)->name)[len - 1] = '\0';
        printf("Enter the marks of 5 subjects :");
        scanf("%f%f%f%f%f", &((ptr + i)->m1), &((ptr + i)->m2), &((ptr + i)->m3), &((ptr + i)->m4), &((ptr + i)->m5));
        getchar();
        ((ptr + i)->total) = ((ptr + i)->m1) + ((ptr + i)->m2) + ((ptr + i)->m3) + ((ptr + i)->m4) + ((ptr + i)->m5);
    }
    printf("\nSorted Ranklist:\n");
    printf("%-20s %-10s %s\n", "Name", "Total", "Rank");
    sort(ptr, n);
    for (int i = 0; i < n; i++)
    {

        printf("%-20s %-10.2f %d\n", ptr[i].name, ptr[i].total, i + 1);
    }

    return 0;
}
void sort(struct student *ptr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((ptr + j)->total < (ptr + j + 1)->total)
            {
                struct student t = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = t;
            }
        }
    }
}
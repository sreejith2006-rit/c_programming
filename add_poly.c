#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};
int readpoly(struct poly a[])
{
    int n;
    printf("Enter the no of Terms :");
    scanf("%d", &n);
    printf("Enter the terms one by one in decreasing order of their powers :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the coefficient of term %d:", i + 1);
        scanf("%d", &a[i].coeff);
        printf("Enter the exponent of term %d :", i + 1);
        scanf("%d", &a[i].exp);
    }
    return n;
}
void display(struct poly a[], int t)
{
    for (int i = 0; i < t; i++)
    {

        if (i == t - 1)
        {
            printf("%d(x^%d)\n", a[i].coeff, a[i].exp);
        }
        else
        {
            printf("%d(x^%d)+", a[i].coeff, a[i].exp);
        }
    }
}
int add(struct poly a[], int e, struct poly b[], int f, struct poly c[])
{
    int i = 0, j = 0, k = 0;
    while (i < e && j < f)
    {
        if (a[i].exp == b[j].exp)
        {
            c[k].exp = a[i].exp;
            c[k].coeff = a[i].coeff + b[j].coeff;
            i++;
            j++;
            k++;
        }
        else if (a[i].exp > b[j].exp)
        {
            c[k].coeff = a[i].coeff;
            c[k].exp = a[i].exp;
            i++;
            k++;
        }
        else
        {
            c[k].coeff = b[j].coeff;
            c[k].exp = b[j].exp;
            j++;
            k++;
        }
    }
    while (i < e)
    {
        c[k].coeff = a[i].coeff;
        c[k].exp = a[i].exp;
        i++;
        k++;
    }
    while (j < f)
    {
        c[k].coeff = b[j].coeff;
        c[k].exp = b[j].exp;
        j++;
        k++;
    }
    return k;
}
int main()
{
    int d, e, f;
    struct poly a[100], b[100], c[100];
    printf("Polynomial 1\n");
    d = readpoly(a);
    display(a, d);
    printf("Polynomial 2\n");
    e = readpoly(b);
    display(b, e);
    printf("Polynomial 3\n");
    f=add(a,d,b,e,c);
    display(c,f);
    return 0;
}
#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};
int readpoly(struct poly a[])
{
    int t, el;
    printf("Enter the no of terms :");
    scanf("%d", &t);
    printf("Enter the coefficients and the exponents in decreasing order \n");
    for (int i = 0; i < t; i++)
    {
        printf("Enter the coefficient of term %d :", i + 1);
        scanf("%d", &a[i].coeff);
        printf("Enter the exponent of term %d :", i + 1);
        scanf("%d", &a[i].exp);
    }
    return t;
}
void display(struct poly a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", a[i].coeff);
        }
        else
        {
            printf("%d(X^%d)+", a[i].coeff, a[i].exp);
        }
    }
}
int add(struct poly a[], int n, struct poly b[], int m, struct poly c[])
{
    int i = 0, j = 0, k = 0;
    while (i < n || j < m)
    {
        if (i == n && j < m)
        {
            c[k].exp = b[j].exp;
            c[k].coeff = b[j].coeff;
            j++;
        }
        if (j == m && i < n)
        {
            c[k].exp = a[i].exp;
            c[k].coeff = a[i].coeff;
            i++;
        }
        if (a[i].exp == b[j].exp && i != n && j != m)
        {
            c[k].coeff = a[i].coeff + b[j].coeff;
            c[k].exp = a[i].exp;
            i++;
            j++;
        }
        else if (a[i].exp > b[j].exp && i != n && j != m)
        {
            c[k].exp = a[i].exp;
            c[k].coeff = a[i].coeff;
            i++;
        }
        else
        {
            if (i != n && j != m)
            {
                c[k].exp = b[j].exp;
                c[k].coeff = b[j].coeff;
                j++;
            }
        }
        k++;
    }
    return k;
}
int main()
{
    struct poly a[100], b[100], c[100];
    int n = readpoly(a);
    printf("Polynomial 1 :");
    display(a, n);
    int m = readpoly(b);
    printf("Polynomial 2 :");
    display(b, m);
    int o = add(a, n, b, m, c);
    printf("Polynomial 3:");
    display(c, o);
    return 0;
}
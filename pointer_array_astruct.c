#include<stdio.h>
#include<stdlib.h>
int main()
{
int  n;
int i;
struct student{
    char name[20];
    int rno,m1,m2,m3,total;
};
puts("enter the no of student details to be entered :");
scanf("%d",&n);
struct student *s;
s=(struct student *)(malloc(sizeof(struct student)*n));
for ( i = 0; i < n; i++)
{   printf("enter the details of student %d\n",i+1);
    scanf("%s",(s+i)->name);
    scanf("%d",&((s+i)->rno));
    scanf("%d",&((s+i)->m1));
    scanf("%d",&((s+i)->m2));
    scanf("%d",&((s+i)->m3));
    (s+i)->total=((s+i)->m1+(s+i)->m2+(s+i)->m3);
}
puts("the details are :");
for ( i = 0; i < n; i++)
{
    printf("%s\n",(s+i)->name);
    printf("%d\n",((s+i)->rno));
    printf("%d\n",((s+i)->m1));
    printf("%d\n",((s+i)->m2));
    printf("%d\n",((s+i)->m3));
    printf("%d\n",((s+i)->total));
}
free(s);
s=NULL;
printf("%u",sizeof(*s));
puts("the details are :");
for ( i = 0; i < n; i++)
{
    printf("%s\n",(s+i)->name);
    printf("%d\n",((s+i)->rno));
    printf("%d\n",((s+i)->m1));
    printf("%d\n",((s+i)->m2));
    printf("%d\n",((s+i)->m3));
    printf("%d\n",((s+i)->total));
}
return 0;
}
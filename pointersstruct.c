#include<stdio.h>
int main()
{
struct student{
    char name[20];
    int rno,mark;
};
struct student s;
struct student *p;
p=&s;
puts("enter the details :");
scanf("%s",p->name);
scanf("%d",&((*p).rno));
scanf("%d",&(p->mark));
puts("the given details are:");
printf("%s\n",s.name);
printf("%d\n",s.rno);
printf("%d\n",s.mark);
printf("\n");
printf("%s\n",(*p).name);
printf("%d\n",(*p).rno);
printf("%d\n",(*p).mark);
printf("\n");
printf("%s\n",p->name);
printf("%d\n",p->rno);
printf("%d\n",p->mark);
printf("\n");
return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int rno;
};
int sort(struct student *ptr,int n){
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n-i-1; j++)
       {
        if(strcmp((ptr+j)->name,(ptr+j+1)->name)>0){
            struct student t= *(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=t;
        }
       }
       
    }
    return 0;
    
}
int main()
{
int n;
printf("enter the no of students :");
scanf("%d",&n);
getchar();
struct student *ptr=(struct student *)malloc(sizeof(struct student)*n);
for (int i = 0; i < n; i++)
{
    printf("Enter the details of student :%d",i+1);
    printf("enter the name :");
    gets((ptr+i)->name);
    printf("enter the roll no");
    scanf("%d",&((ptr+i)->rno));
    getchar();
}
sort(ptr,n);
for (int i = 0; i < n; i++)
{
    printf("%s      %d",(ptr+i)->name,(ptr+i)->rno);
}
free(ptr);
return 0;
}
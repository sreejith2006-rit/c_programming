#include<stdio.h>
int main()
{
typedef struct student{
    char name[50];
    int marks;
    char grade;
} student;

student arr[2];
for (int i = 0; i < 2; i++)
{
    printf("enter your name:");
    scanf("%s",arr[i].name);
    printf("enter your marks: ");
    scanf("%d",&arr[i].marks);
    getchar();
    printf("enter your grade :");
    scanf("%c",&arr[i].grade);
    printf("\n");
}
for (int i = 0; i <  2; i++)
{
    printf("%s %d %c",arr[i].name,arr[i].marks,arr[i].grade);
    printf("\n");
}

return 0;
}

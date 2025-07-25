
#include <stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rno, m1, m2, m3;
};
int sort(struct student arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(strcmp(arr[j].name,arr[j+1].name)>0){
                struct student t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        
    }
    return 0;
    
}
int main()
{
    int n;
    struct student arr[30];
    printf("how many students :?");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        printf("enter the details of student %d\n",i+1);
        printf("enter the name:");
        gets(arr[i].name);
        printf("enter the roll no:");
        scanf("%d",&arr[i].rno);
        getchar();

    }
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%s        %d\n",arr[i].name,arr[i].rno);
    }
    

    return 0;
}
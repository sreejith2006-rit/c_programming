#include<stdio.h>
#include<string.h>
int main()
{
char A[90][90],temp[100];
int i,n,pass;
printf("enter the no of strings");
scanf("%d",&n);
getchar();
for (int i = 0; i < n; i++)
{
  fgets(A[i],sizeof(A[i]),stdin);
  int len=strlen(A[i]);
  A[len-1][i]='\0';
  
}
printf("\n");
for (int i = 0; i < n; i++)
{
    printf("%s",A[i]);
}


return 0;
}
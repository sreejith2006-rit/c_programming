#include <stdio.h>
#include<math.h>
int main()

{ int marks[8]={1,2,3,4,5,6,7,8};
int p;
for (int i = 0; i <8; i++)
{
   for (int j = i+1; j <8; j++)
   {
    for (int k = j+1; k <8; k++)
    {
        if(marks[i]+marks[j]+marks[k]==12){
            printf("(%d,%d,%d)",marks[i],marks[j],marks[k]);
            p+=1;}
    }
    
   }
   
}
printf("%d",p);

    

    
    return 0;
}
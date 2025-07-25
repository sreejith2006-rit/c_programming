// Write a program to compute the cost of painting a house. The program shoul read
// the width, length and height of the house, the number windows and doors and their
// dimensions. Assume that the windows and their dimesnsions are of uniform nature.
#include<stdio.h>
int main()
{
float w,l,h,l_w,w_w,l_d,w_d,cost_per_metre,req_area;
int n_w,n_d;
printf("enter the length ,breadth,height of house one by one");
scanf("%f%f%f",&l,&w,&h);
printf("enter the no of doors and the no of windows one by one");
scanf("%d%d",&n_d,&n_w);
printf("enter the the length and breadth of the windows");
scanf("%f%f",&l_w,&w_w);
printf("enter the length and breadth of the doors");
scanf("%f%f",&l_d,&w_d);
req_area=(l*w + 2*w*h +2*h*l)-(n_w*(l_w *w_w)+n_d*(l_d*w_d));
printf("the total area is %f\n",req_area);
printf("enter the cost per metre");
scanf("%f",&cost_per_metre);
float t_cost=cost_per_metre*req_area;
printf("cost of painting the house is %f",t_cost);
return 0;
}
// Enter the length, breadth, and height of the house one by one: 10 15 8
// Enter the number of doors and the number of windows one by one: 2 4
// Enter the length and breadth of the windows: 3 4
// Enter the length and breadth of the doors: 7 3
// Enter the cost per meter: 12.5

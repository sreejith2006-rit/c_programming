// 2. Write a program to compute the compound interest. Assume that the principal amount,
// rate of interest, the period of deposit and the compounding scheme are user inputs.
// (Hint:- The Compound interest CI = P
// 􀀀
// 1 + r
// 100N
// NY
// 􀀀 P where P=principal amount,
// r=annual rate of interest in percentage, Y = deposit period in years, N = the number of
// times that compound interest is calculated per year.)
#include<stdio.h>
#include<math.h>
int main()
{
double p,r;
float y,cs;
double ci;
printf("enter the principal amount: ");
scanf("%lf",&p);
printf("enter the rate of in interst: ");
scanf("%lf",&r);
printf("enter the no of years: ");
scanf("%f",&y);
printf("enter the compounding scheme: ");
scanf("%f",&cs);
ci=(p*pow(1+r/(100*cs),cs*y))-p;
printf("the coumpound interst is :%lf",ci);

return 0;
}
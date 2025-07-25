// Distance from home to office (in kilometers).
// Fuel efficiency of the car (in kilometers per liter).
// One-way fare of a metro ticket (in currency units).
// Fuel cost per liter (in currency units per liter).
// Maintenance cost per kilometer (in currency units per kilometer).
#include<stdio.h>
int main()
{
float distance,fuel_eff,fc_l,maintenace,tc,mil,main_dis,tic_metro,self_driving;
printf("Enter the details for car travel\n");
printf("enter the fuel efficcientcy of the car: ");
scanf("%f",&fuel_eff);
printf("enter the fuel cost per litre of the car: ");
scanf("%f",&fc_l);
printf("enter the maintenance of the car: ");
scanf("%f",&maintenace);
printf("enter the distance: ");
scanf("%f",&distance);
printf("enter the details for metro:\n");
printf("enter the metro ticket cost for 1 way :");
scanf("%f",&tc);
mil=(distance/fuel_eff)*fc_l;
main_dis=maintenace*distance;
self_driving=mil+main_dis;
tic_metro=2*tc;
if (self_driving>tic_metro)
{
    printf("go by metro");
}
else
{
    printf("go by car");
}





return 0;
}
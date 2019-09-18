#include<stdio.h>
#include<conio.h>
void main()
{
int units;
float bill,surcharge,t_bill;
printf("Enter No of units Consumed :");
scanf("%d",&units);

if(units<=300)
    { bill=units*3;
    }
else
    { bill=units*3.5;
      surcharge=bill*5/100;
      t_bill=bill+surcharge;

    }
    printf("Bill is %f ",t_bill);
    getch();
}

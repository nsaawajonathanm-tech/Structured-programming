#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Interactive console program(menu/sentinel+loop + decision----switch, break
    //Ex.3.20(p.178), ch.3
       //SALARY CALCULATOR
       //Determine the gross pay for each of several employees.
      double salary,rate,hours;
printf("Enter the number of hours worked(-1 to end):\n");
        scanf("%lf",&hours);
      while (hours!=-1){


        printf("Enter the hourly rate:\n");
        scanf("%lf",&rate);

         if (hours>40){
         salary= 40*rate+ (hours-40)*rate*1.5;}
         else{salary=hours*rate;}
         printf("Salary is $%.2lf\n",salary);
printf("Enter the number of hours worked(-1 to end):\n");
        scanf("%lf",&hours);
      }


    return 0;
}

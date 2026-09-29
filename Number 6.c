#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Loop with user input ch.3 , ex. 3.16
    //MONTHLY SALES TAX REPORT
    double total_coll,sales, county_tax,state_tax,total_sales_tax;
    char month[10];

    printf("Enter the total collections(-1 to quit):\n");
    scanf("%lf",&total_coll);
    while (total_coll!=-1){
    printf("Enter the month:\n");
    scanf("%9s",month);
    sales = total_coll/1.09;
    state_tax=0.04*sales;
    county_tax=0.05*sales;
    total_sales_tax=state_tax+county_tax;

    printf("Total collections: $%.2lf\n",total_coll);
    printf("sales: $%.2lf\n",sales);
    printf("County sales tax: $%.2lf\n",total_sales_tax);
    printf("State sales tax: $%.2lf\n",state_tax);
    printf("Total sales tax: $%.2lf\n",total_sales_tax);
   printf("Enter the total amount collected(-1 to quit):\n");
scanf("%lf", &total_coll);}
    return 0;
}

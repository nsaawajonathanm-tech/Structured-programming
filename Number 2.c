#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INPUT,PROCESS,OUTPUT

   //Read 2 integers, display their sum, product, difference, quotient and remainder, ex. 2.16, ch.2
   int A,B,sum,product,difference,quotient,remainder;
    printf("Enter integer A: \n");
    scanf("%d",&A);
    printf("Enter integer B: \n");
    scanf("%d",&B);
    sum = A+B;
    product = A*B;
    difference = (A-B);
    quotient = A/B;
    remainder = A%B;
    printf("The sum is = %d\n",sum);
    printf("The product is = %d\n",product);
    printf("The difference is = %d\n",difference);
    printf("The quotient is = %d\n",quotient);
    printf("The remainder is = %d\n",remainder);



    return 0;
}

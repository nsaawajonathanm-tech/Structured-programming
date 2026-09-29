#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECISION (if, else if, else if)--ex.2.29,pg 135, ch. 2
    //Display 3 numbers in increasing order
    int A,B,C;
    printf("Enter the first number:\n");
    scanf("%d",&A);
    printf("Enter the second number:\n");
    scanf("%d",&B);
    printf("Enter the third number:\n");
    scanf("%d",&C);
    if (A>B&&B>C){printf("%d,%d,%d",C,B,A);}
        else if (A>B&&C>B){printf("%d,%d,%d",B,C,A);}
        else if (B>A&&A>C) {printf("%d,%d,%d",C,A,B);}
       else if  (B>C&&C>A) {printf("%d,%d,%d",A,C,B);}
        else if (C>A&&A>B) {printf("%d,%d,%d",B,A,C);}
       else if (C>B&&B>A) {printf("%d,%d,%d",A,B,C);}
       else {printf("Duplicate numbers detected");}


    return 0;
}

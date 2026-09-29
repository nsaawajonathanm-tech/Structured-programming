#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Loop with decision
    //PRINT 500$ SIGNS, ex. 3.37(p.182)
    int count;
    for (count=1; count<=500;count++)
    {printf("$ ");
    if (count%50==0){printf("\n");}}

    return 0;
}

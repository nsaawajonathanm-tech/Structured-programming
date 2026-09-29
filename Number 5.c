#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Loop with calculation. use the loop variable or repeated values in a calculation
    //TABULAR OUTPUT USING LOOPING, ex. 3.24, ch.3
    printf("\tN\tN^2\tN^3\tN^4");
    int n;
    for(n=1;n<=10;n++){
        printf("\n\t%d\t%d\t%d\t%d",n,n*n,n*n*n,n*n*n*n*n);
    }
    return 0;
}

#include <stdio.h>
#define TOTAL_ROWS 9

int main(){
    int row, col, numstars=1;
    int half, rate=1;
    
    for(row=1;row<=TOTAL_ROWS;row++){
        half=TOTAL_ROWS/2;
        for(col=1;col<=half+1-numstars;col++)
            printf(" ");
        for(col=1;col<=2*numstars-1;col++)
            if (row%2==0 && col==numstars)
                printf("@");
            else if (col%2==0)
                printf("-");
            else
                printf("*");
        if (numstars==(half+1))
            rate = -rate;
        numstars += rate;
        printf("\n");
    }
    return 0;
}

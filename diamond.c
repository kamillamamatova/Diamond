#include <stdio.h>
// Pre-defined total of rows
#define TOTAL_ROWS 9

int main(){
    int row, col, numstars=1;
    int half, rate=1;

    // Outer loop (iterates through each row)
    for(row=1;row<=TOTAL_ROWS;row++){
        half=TOTAL_ROWS/2;
        // Inner loop  to print spaces before the stars to center the pattern
        for(col=1;col<=half+1-numstars;col++)
            printf(" ");
        // Inner loop to print the pattern
        for(col=1;col<=2*numstars-1;col++){
            // If the row is even and the column is the center column
            if (row%2==0 && col==numstars)
                printf("@");
            // If the column is even
            else if (col%2==0)
                printf("-");
            else
                printf("*");
        }
        // Middle row
        if (numstars==(half+1))
            rate = -rate;
        // Growth or shrinking
        numstars += rate;
        printf("\n");
    }
    // Exit the program
    return 0;
}

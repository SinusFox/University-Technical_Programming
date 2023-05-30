#include "7_Matrix_1x1.h"

int main() {
    // printing the values as matrix
    for (int i = 1; i <= UPTO; i++) {       // y axis
        for (int j = 1; j <= UPTO; j++) {   // x axis
            printf("%5i", (i*j));           // printing each value, i*j = the value
        }
        printf("\n");                       // end of line on x axis
    }

    return 0;
}

#include <stdio.h>

int main() {
    // setting the end of the array
    int upTo = 20;

    // printing the values as matrix
    for (int i = 1; i <= upTo; i++) {       // y axis
        for (int j = 1; j <= upTo; j++) {   // x axis
            printf("%5i", (i*j));           // printing each value, i*j = the value
        }
        printf("\n");                       // end of line on x axis
    }

    return 0;
}

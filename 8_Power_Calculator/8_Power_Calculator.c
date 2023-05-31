#include "8_Power_Calculator.h"

void main() {
    unsigned long base, power;

    // input
    printf("Please type in the base: ");
    scanf("%i", &base);
    printf("\nPlease type in the power: ");
    scanf("%i", &power);

    // calculate
    Calculate(&base, &power);

    // output
    printf("\nThe number is: %i.", base);

    return 0;
}

void Calculate(unsigned long* base, unsigned long* power) {
    unsigned long baseOriginal = *base;
    if (*power == 0) {                           // power zero
        *base = 1;
        return;
    }
    if (*power > 0) {                           // power positive
        for (unsigned int i = 1; i < *power; i++) {
            *base *= baseOriginal;
        }
    }
}

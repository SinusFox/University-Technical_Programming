#include <stdio.h>

int main() {
    // creating variables
    int first = 0, second = 0, addition = 0, subtraction = 0, multiplication = 0, modulo = 0;
    double division = 0;

    // receiving numbers from user
    printf("Please type in the first integer: ");
    scanf("%i", &first);
    printf("Please type in the second integer: ");
    scanf("%i", &second);

    // checking numbers
    printf("Your input: %i and %i\nCalculating...\n\n", first, second);

    // calculating
    addition = first + second;
    subtraction = first - second;
    multiplication = first * second;
    if (second != 0) {
        division = first / second;
        modulo = first % second;
    } else {
        printf("\nError: Dividing by 0 is not allowed. Output will be 0 for devision and modulo.\n\n");
    }

    // output of calculation
    printf("The results are:\n+ = %i\n- = %i\n* = %i\n/ = %f\nmod = %i", addition, subtraction, multiplication, division, modulo);

    return 0;
}

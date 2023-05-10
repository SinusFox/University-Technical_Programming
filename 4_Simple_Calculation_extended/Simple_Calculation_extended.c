/* Extended means using doubles in this case, so floating point numbers can be used. Thus,
the modulo operation is not usable anymore and has been removed. */

#include <stdio.h>

int main() {
    // creating variables
    double first = 0, second = 0, addition = 0, subtraction = 0, multiplication = 0, division = 0;

    // receiving numbers from user
    printf("Please type in the first integer: ");
    scanf("%lf", &first);
    printf("Please type in the second integer: ");
    scanf("%lf", &second);

    // checking numbers
    printf("Your input: %lf and %lf\nCalculating...\n\n", first, second);

    // calculating
    addition = first + second;
    subtraction = first - second;
    multiplication = first * second;
    if (second != 0) {
        division = first / second;
    } else {
        printf("\nError: Dividing by 0 is not allowed. Output will be 0 for devision and modulo.\n\n");
    }

    // output of calculation
    printf("The results are:\n+ = %lf\n- = %lf\n* = %lf\n/ = %f\n", addition, subtraction, multiplication, division);

    return 0;
}

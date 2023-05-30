#include <stdio.h>

void out(double* number) {
    printf("The result is %lf.", *number);
}

int main() {
    // vars
    double numOne = 0, numTwo = 0, numOut = 0;
    char cancel, operation;

    // main loop
    do {
        // input for calculation
        printf("Please type in the first number: ");
        scanf("%lf", &numOne);
        fflush(stdin);
        printf("\nPlease type in the operation (+/-/*/:): ");
        scanf("%c", &operation);
        fflush(stdin);
        printf("Please type in the second number: ");
        scanf("%lf", &numTwo);
        fflush(stdin);

        // calculations
        switch (operation) {
            case '+':   // add
                numOut = numOne + numTwo;
                out(&numOut);
                break;
            case '-':   // subtract
                numOut = numOne - numTwo;
                out(&numOut);
                break;
            case '*':   // multiply
                numOut = numOne * numTwo;
                out(&numOut);
                break;
            case ':':   // divide
                if (numTwo != 0) {
                    numOut = numOne / numTwo;
                    out(&numOut);
                } else {
                    printf("\nSecond number can't be 0.");
                }
                break;
            default:    // other -> invalid operation
                printf("\nInvalid operation.");
        }
        
        // input 'q' if programm should be exited
        printf("\nWould you like to enter another calculation? (any other key = continue, q = quit): ");
        scanf("%c", &cancel);
        fflush(stdin);
    } while (cancel != 'q');    // end of do-while-loop

    return 0;
}

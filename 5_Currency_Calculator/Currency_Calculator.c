#include <stdio.h>
#include <math.h>

int main() {
    // variables
    double amount = 0, usd = 1.09643, jpy = 148.33512; // eur = 1 as base currency
    char currentCurrency = 0, targetCurrency;

    // input
    printf("1 EUR\n2 USD\n3 JPY\n\nPlease type in the current currency: ");
    scanf("%i", &currentCurrency);
    printf("Please type in the amount: ");
    scanf("%lf", &amount);
    printf("\n1 EUR\n2 USD\n3 JPY\n\nPlease type in the target currency: ");
    scanf("%i", &targetCurrency);

    // check for valid input
    if (currentCurrency < 1 || currentCurrency > 4 || targetCurrency < 1 || targetCurrency > 4) {
        printf("Invalid currencies.");
        return 1;
    }

    // calculating
    if (currentCurrency != targetCurrency) {
        // converting to base currency
        switch (currentCurrency) {
            case 2:
                amount /= usd;
                break;
            case 3:
                amount /= jpy;
                break;
            default:
                break;
        }
        // converting to target currency
        switch (targetCurrency)
        {
        case 2:
            amount *= usd;
            break;
        case 3:
            amount *= jpy;
        default:
            break;
        }
    }

    // rounding fun
    amount = round((amount*100))/100;

    // output
    printf("Amount in target currency is: %lf", amount);

    return 0;
}

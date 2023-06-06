#include "10_Lotto.h"

int main() {
    // vars
    int usr_input[ARRLENGTH] = {0}, ran_nums[ARRLENGTH] = {0}, amnt_correct;

    // input
    for (int i = 0; i < ARRLENGTH; i++) {
        usr_input[i] = Input(usr_input);
    }

    // initializing number generator
    Initialize();

    // fill lottery array
    RanArray_Fill(ran_nums);

    // check for correct guesses and writes the num of correct guesses in amnt_correct
    amnt_correct = CheckGuess(usr_input, ran_nums);

    // output
    Output(amnt_correct);

    // debugging
    for (int i = 0; i < ARRLENGTH; i++)     // output user input
    {
        printf("\nusr_in %i: %i", i, usr_input[i]);
    }
    
    for (int i = 0; i < ARRLENGTH; i++)     // output random numbers
    {
        printf("\nran_num %i: %i", i, ran_nums[i]);
    }
    

    return 0;
}

void Initialize() {
    time_t t;
    srand(time(&t));
}

int Input(int usr_input[]) {
    int input;
    while (1) {
        printf("\nPlease type in a number: ");
        scanf("%i", &input);                                                    // user input number
        if (CheckNotInNums(usr_input, input) && ValidNum(input)) {
            break;                                                              // returns num if accectable
        }
        printf("\nNumber is not allowed.");                                     // error: invalid number
    }
    return input;
}

void Output(int amnt_correct) {
    printf("\nYou got %i numbers right!", amnt_correct);
}

int CheckGuess(int usr_in[], int ran_nums[]) {
    int count = 0;
    for (int i = 0; i < ARRLENGTH; i++)                         // iterating through usr_in
    {
        if (CheckNotInNums(ran_nums, usr_in[i]) == 0) {         // checks and counts how often each num of usr_in is in ran_nums
            count++;
            continue;
        }
    }
    return count;                                               // returns amount of right guesses
}

void RanArray_Fill(int arr[]) {
    int random_number;
    for (int i = 0; i < ARRLENGTH; i++) {                   // fill array with random values from 1 to 49
        while (1) {
            random_number = RanNum();
            if (CheckNotInNums(arr, random_number)) {       // check if random number doesn't exist yet
                arr[i] = random_number;                     // if check successfull: writes random number in array
                break;
            }        
        }
    }
}

int RanNum() {
    return (rand() % 49) + 1;       // returns random values from 1 to 49
}

int CheckNotInNums(int arr[], int num) {
    for (int i = 0; i < ARRLENGTH; i++) {
        if (arr[i] == num) return 0;                // returns 0 if num exists already
    }
    return 1;                                       // returns 1 if num doesn't exist yet
}

int ValidNum(int input) {
    if (input > 0 && input < 50) return 1;          // returns 1 if input is between 0 and 50, thus valid
    return 0;                                       // returns 0 if input is NOT between 0 and 50, thus invalid
}

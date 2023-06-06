// Bubblesort

#include "9_Num_Sort.h"

int main() {
    // vars
    int nums[MAXARR] = {12,15,17,6,2,4,7,6,3,10};

    // sort
    for (int max = sizeof(nums)/4 - 1; max >= 0; max--) {
        //vars
        int temp = 0;

        // main loop
        for (int i = 0; i < sizeof(nums)/4 - 1; i++) {  // sizeof -> bytes, so divided by type size; -1 to avoid overflow
            if (nums[i] > nums[i + 1]) {
                temp = nums[i];                         // switching the numbers
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }

    // output
    for (int i = 0; i < sizeof(nums)/4; i++) {          // sizeof -> bytes, so divided by type size; -1 to avoid overflow
        printf("%i\n", nums[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
        int i = 3;
        const char fox[4] = "FOX";

        printf("Printing ");
        for (unsigned int j = 0; j < 3; j++) {
                printf("%c", fox[j]);
        }

        printf(", Since they are better :P\n");

        return 0;
}

#include <stdio.h>

int main() {
        int i = 70;

        printf("Printing ");
        for (unsigned int j = i; j < 89; j += 9) {
                printf("%c", j);
        }

        printf(", Since they are better :P\n");

        return 0;
}

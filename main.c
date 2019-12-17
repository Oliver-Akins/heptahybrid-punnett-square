#include <stdio.h>
#include <ctype.h>


#define NUMBER_OF_CHARACTERS 7


char characters[NUMBER_OF_CHARACTERS] = {
    'R', 'Y', 'P', 'I', 'G', 'A', 'T'
};


void print_bitstring (int value) {

    // NOTE: Iterate through all the bits in the number starting at the left to
    //       display it in the byte style
    for (int index = 0; index <= NUMBER_OF_CHARACTERS-1; index++) {

        // NOTE: Determine if the bit is a 0 or 1
        if ((value >> index) & 1) {
            putchar(tolower(characters[index]));
        } else {
            putchar(toupper(characters[index]));
        };
    };
    printf("\n");
};



int main () {
    int value = 0;

    // NOTE: Iterate through all possible combinations of characters
    while (value < (1<<(NUMBER_OF_CHARACTERS+1))) {
        print_bitstring(value);
        value++;
    };
    printf("Combinations Generated: %d\n", value);
};
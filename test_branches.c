#include <stdio.h>
void evaluateCondition(int input) {
    // Using if-else statements
    if (input < 0) {
        printf("Input is negative.\n");
    } else if (input == 0) {
        printf("Input is zero.\n");
    } else if (input > 0 && input <= 10) {
        printf("Input is between 1 and 10.\n");
    } else {
        printf("Input is greater than 20.\n");
    }

    // Using switch case statements
    switch (input) {
        case 1:
            printf("Input is one.\n");
            break;
        case 2:
            printf("Input is two.\n");
            break;
        case 3:
            printf("Input is three.\n");
            break;
        case 4:
            printf("Input is four.\n");
            break;
        case 5:
            printf("Input is five.\n");
            break;
        default:
            printf("Input is not between 1 and 5.\n");
            break;
    }
}
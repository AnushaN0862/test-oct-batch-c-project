#include <stdio.h>

biggest3() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use only 'if' statements to find the largest number

    // Assume num1 is the largest initially
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The largest number is: %d\n", num1);
        }
    }

    // Check if num2 is the largest
    if (num2 >= num1) {
        if (num2 >= num3) {
            printf("The largest number is: %d\n", num2);
        }
    }

    // Check if num3 is the largest
    if (num3 >= num1) {
        if (num3 >= num2) {
            printf("The largest number is: %d\n", num3);
        }
    }

// return 0;
}


// Your code here...
#include <stdio.h>

int main() {
    int num, n;

    // Prompt user for input
    printf("Enter a number and bit position to toggle (0-31): ");

    // Validate input
    if (scanf("%d %d", &num, &n) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Exit with error
    }

    // Validate bit position
    if (n < 0 || n > 31) {
        printf("Error: Bit position must be between 0 and 31.\n");
        return 1;
    }

    // Toggle nth bit
    num = num ^ (1 << n);

    // Display result
    printf("Number after toggling bit %d: %d\n", n, num);

    return 0;
}

#include <stdio.h>

int main() {
    float num;
    
    // Prompt the user for input
    printf("Enter a float: ");
    
    // Scan the float value
    if (scanf("%f", &num) == 1) {
        // If the input is valid, display the value
        printf("You entered: %.2f\n", num);
    } else {
        // If the input is invalid, display an error message
        printf("Invalid input! Please enter a valid float.\n");
    }

    return 0;
}

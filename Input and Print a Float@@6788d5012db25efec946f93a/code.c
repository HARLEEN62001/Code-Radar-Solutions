#include <stdio.h>

int main() {
    float num;
    
    // Read the input float directly without the prompt
    if (scanf("%f", &num) == 1) {
        // Print the float with 2 decimal places
        printf("%.2f\n", num);
    } else {
        // If the input is not valid, display an error message
        printf("Invalid input\n");
    }

    return 0;
}



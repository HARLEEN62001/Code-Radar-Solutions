#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100]; // Adjust size as needed
    float num;

    printf("Enter a float: ");
    fgets(buffer, sizeof(buffer), stdin); // Read the whole line

    if (sscanf(buffer, "%f", &num) == 1) { // Check if a float was successfully read
        printf("You entered: %.2f\n", num);
    } else {
        printf("Invalid input.\n"); // Handle cases where the input is not a float
    }

    return 0;
}
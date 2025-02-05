#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h> // Include for strtod

int main() {
    setlocale(LC_ALL, "C");

    char buffer;
    char *endptr; // For error checking with strtod
    double num;  // Use double for potentially higher precision

    printf("Enter a float: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        perror("Error reading input"); // Handle read errors
        return 1; 
    }

    // Attempt to convert the string to a double.  strtod is safer than atof.
    num = strtod(buffer, &endptr);

    // Check for conversion errors or extra characters after the number.
    if (*endptr!= '\0' && *endptr!= '\n') {  // Check for extra chars after the number
        fprintf(stderr, "Invalid input: Extra characters after the number.\n");
        return 1;
    } else if (num == 0.0 && endptr == buffer) { // Check if no conversion happened
        fprintf(stderr, "Invalid input: No number was entered.\n");
        return 1;
    }

    printf("You entered: %.2lf\n", num); // Use %lf for double

    return 0;
}
#include <stdio.h>

int main() {
    float num;
    

    if (scanf("%f", &num) == 1); {
        
        printf("%.2f\n", num);
    } else {
        
        printf("Invalid input\n");
    }

    return 0;
}
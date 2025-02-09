
#include <stdio.h>

int main() {
    int a, b, c;
    
    
    scanf("%d %d %d", &a, &b, &c);

    // Calculating the correct average
    float avg = (a + b + c) / 3.0;

    // Printing the average with 2 decimal places
    printf("Average: %.2f\n", avg);

    return 0;
}

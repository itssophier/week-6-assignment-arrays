#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    // Input revenue for 7 days
    printf("Enter revenue for 7 days:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}

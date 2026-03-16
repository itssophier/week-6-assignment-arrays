#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int i, j, k;
    int totalOccupied = 0;
    int totalVacant = 0;

    // Seed the random number generator
    srand(time(0));

    // Assign random occupancy to each room
    for (i = 0; i < 3; i++) {       // Loop through branches
        for (j = 0; j < 5; j++) {   // Loop through floors
            for (k = 0; k < 10; k++) { // Loop through rooms
                chain[i][j][k] = rand() % 2; // 0 or 1
                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                } else {
                    totalVacant++;
                }
            }
        }
    }

    // Display the results
    printf("Total number of occupied rooms: %d\n", totalOccupied);
    printf("Total number of vacant rooms: %d\n", totalVacant);

    return 0;
}

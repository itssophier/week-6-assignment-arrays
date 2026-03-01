#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int i, j, k;
    int totalOccupied = 0;

    // Seed random number generator
    srand(time(0));

    // Assign random occupancy (0 or 1)
    for(i = 0; i < 3; i++) {          // Branches
        for(j = 0; j < 5; j++) {      // Floors
            for(k = 0; k < 10; k++) { // Rooms
                chain[i][j][k] = rand() % 2;  // 0 = vacant, 1 = occupied
                if(chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}



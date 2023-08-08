#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice() {
    return rand() % 6 + 1;
}
int main() {
    int numRolls, i;
    printf("Welcome to the Dice Rolling Simulator!\n");
    srand(time(NULL));
    printf("Enter the number of times you want to roll the dice: ");
    scanf("%d", &numRolls);
    if (numRolls <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }
    printf("Rolling the dice %d times:\n", numRolls);
    for (i = 1; i <= numRolls; i++) {
        int result = rollDice();
        printf("Roll %d: %d\n", i, result);
    }
    return 0; 
}
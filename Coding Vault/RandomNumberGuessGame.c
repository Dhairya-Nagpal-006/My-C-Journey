#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_gusses = 0;
    int guessed;

    // Print the random number
    // printf("Random number: %d\n", randomNumber);
    do 
    {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guessed);
        number_of_gusses++;

        if (guessed < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guessed > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", randomNumber, number_of_gusses);
        }
    } while (guessed != randomNumber);

    return 0;
}
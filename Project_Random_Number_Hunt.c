#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator with the current time as the seed
    srand(time(0));

    // Print introductory messages
    printf("Welcome To Random Number Hunt!\n");
    printf("You win the game if you guess the number within 5 attempts; otherwise, you lose.\n");
    printf("Please guess a number from 1 to 100.\n");

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;  // Counter for the number of guesses made
    int guessed_number;     // Variable to store the user's guess

    // Loop to keep asking the user for guesses until they guess the correct number
    do
    {
        // Prompt the user to enter their guess
        printf("Guess the number: ");
        scanf("%d", &guessed_number);

        // Check if the guessed number is too high, too low, or correct
        if (guessed_number > randomNumber) {
            printf("Lower number please!\n");  // Prompt user to guess a lower number
        }
        else if (guessed_number < randomNumber) {
            printf("Higher number please!\n");  // Prompt user to guess a higher number
        }
        else {
            printf("Congrats!!\n");  // Congratulate the user for guessing correctly
        }
        no_of_guesses++;  // Increment the number of guesses

    } while (guessed_number != randomNumber);  // Continue looping until the correct number is guessed

    // Print the total number of guesses made
    printf("You guessed the number in %d guesses\n", no_of_guesses);

    // Check if the number of guesses is within the allowed limit
    if (no_of_guesses <= 5) {
        printf("You Won.\n");  // User wins if they guessed within 5 tries
    }
    else {
        printf("Sorry, You Lose.\n");  // User loses if they did not guess within 5 tries
    }

    return 0;  // End of the program
}

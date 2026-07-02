#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");
    srand(time(NULL)); // Seed the random number generator with current time
    number = rand() % 100 + 1; // Generate a random number between 1 and 100
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    printf("Attempts taken: %d\n", attempts);
    printf("Thank you for playing the Number Guessing Game!\n");
    return 0;
}
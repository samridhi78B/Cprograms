#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int randomNumber;
    int guess = 0; 
    int attempts = 0;
    int score = 0;

    srand(time(NULL));
    randomNumber = rand() % 100 + 1; 

    printf("Guess a number between 1 and 100: ");
    while (guess != randomNumber) {
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again: ");
        } else if (guess > randomNumber) {
            printf("Too high! Try again: ");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
            score = 100 - (attempts * 10);
            if (score < 0) score = 0;
            printf("🏆 Your score is: %d\n", score);
        }
    }

    return 0;
}


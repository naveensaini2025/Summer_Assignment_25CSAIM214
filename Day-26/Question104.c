
#include <stdio.h>

int main() {
    char questions[5][100] = {
        "What is the capital of France?\n1. Berlin 2. Madrid 3. Paris 4. Rome",
        "Which language is this program written in?\n1. Java 2. Python 3. C 4. Ruby",
        "How many days are there in a week?\n1. 5 2. 6 3. 7 4. 8",
        "What is 5 + 7?\n1. 10 2. 11 3. 12 4. 13",
        "What is the boiling point of water in Celsius?\n1. 90 2. 95 3. 100 4. 105"
    };

    int answers[5] = {3, 3, 3, 3, 3};
    int userAnswer;
    int score = 0;
    int i;

    printf("=== Quiz Application ===\n");
    printf("Answer by entering the option number (1-4).\n\n");

    for (i = 0; i < 5; i++) {
        printf("Q%d. %s\n", i + 1, questions[i]);
        printf("Your answer: ");
        scanf("%d", &userAnswer);

        if (userAnswer == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer was option %d.\n\n", answers[i]);
        }
    }

    printf("Quiz over! Your score: %d out of 5\n", score);

    return 0;
}

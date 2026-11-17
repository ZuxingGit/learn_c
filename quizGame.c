#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"What is the largest planet in the solar system?\n",
                             "What is the hottest planet?\n",
                             "What planet has the most moons?\n",
                             "Is the Earth flat?\n"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes\n"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++)
    {
        printf("\n%s", questions[i]);
        printf("%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        if (toupper(guess) == answerKey[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
            printf("Wrong!\n");
    }

    printf("\nYour score is %d out of %d\n", score, questionCount);

    return 0;
}
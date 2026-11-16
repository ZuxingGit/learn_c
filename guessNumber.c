#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");

    do
    {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess == answer)
        {
            break;
        }
        else if (guess < answer)
        {
            printf("Try a bigger number\n");
        }
        else
        {
            printf("Try a smaller number\n");
        }

    } while (guess != answer);

    printf("CORRECT! The answer is %d\n", answer);
    printf("It took you %d tries\n", tries);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ************ calloc() ************
    /* contiguous allocation.
        Allocates memory dynamically and SETS ALL ALLOCATED BYTES TO 0.
        malloc() is faster, but calloc() leads to less bugs
        calloc(count, size)
    */
    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    // int *scores = malloc(number * sizeof(int));
    int *scores = calloc(number, sizeof(int));

    if (scores == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 5;
    int guess;
    int limit = 0;

    while (num != guess)
    {

        if (limit <= 5)
        {
            printf("guess a number: ");
            scanf("%d", &guess);
        }

        else
        {
            printf("you lose");
            break;
        }
        if (num == guess)
        {
            printf("you win");
        }

        limit++;
    }

    return (0);
}

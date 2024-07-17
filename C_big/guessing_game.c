#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int guess_num = 5;
    int num;
    int limit = 0;
    while(num != guess_num)
    {
        if(limit <= 5)
        {
            printf("guess the number: ");
            scanf("%d",&num); 
        }
        else
        {
            printf("you lose");
            break;
        }
        limit++;
        if (num == guess_num)
        {
           printf("you win");
        }
    }
    return(0);
}

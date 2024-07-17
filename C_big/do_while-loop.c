#include<stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    do{
        printf("\nEnter a number ");
        scanf("%d", &number);

        if (number > 0)
        {
        sum = sum + number;
        }
        

    }while(number > 0);

    printf("sum is : %d", sum);

}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int nums[2][3] = {1,2,3,4,5,6};
    int nums[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    int i = 0;
    while (i < 2)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", nums[i][j]);
        }
        i++;
    }

    return (0);
}
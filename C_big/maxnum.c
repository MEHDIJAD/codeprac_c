#include <stdio.h>

int findMax(int x, int y)
{
    /*if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }*/
   return (x > y) ? x : y;
}

// we can use a ternary operater: it's a shortcut to if/else when assigning return value
// (condition) ? value if true : value id false

int main()
{
    int max = findMax(4, 5);
    printf("Max is: %d\n", max);

    return 0;
}
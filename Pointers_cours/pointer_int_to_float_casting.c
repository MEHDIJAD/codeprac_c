#include<stdio.h>

int main()
{
    int nb;
    int *ptr;
    nb = 42;
    ptr = &nb;

    printf("%d %e\n", *ptr, *(float *)ptr); // bow you're ganna plat the role of a  pointer to a float

}
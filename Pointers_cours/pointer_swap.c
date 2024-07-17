#include<stdio.h>

void swap(int *n , int *n1)
{
    int tmp; 
    tmp = *n; // tmp = *n(pointer to address storing value 42) ==> tmp = *n = &a = 42
    *n = *n1; // *n = *n1(giving the value of address stored by pointer n1 to pointer n) ==> *n = *n1 = &b = 1337 ===> *n = 1337
    *n1 = tmp; // giving value tmp = 42 to *n1 ==> *n1 = 42 / now *n1 points to &a ==> *n1 = 42
}

int main()
{
    int a = 42;
    int b = 1337;
    printf(" a-->%d\tb-->%d\n", a, b);
    swap(&a, &b);
    printf(" a-->%d\tb-->%d", a, b);
}

    


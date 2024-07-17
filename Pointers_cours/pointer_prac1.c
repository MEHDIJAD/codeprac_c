#include<stdio.h>
#include<stdlib.h>

int  *foo()
{
     int *n;
     n = malloc(sizeof(int)); // i don't get it yet 
     *n = 42;

     return n;
}

void bar()
{
    int nb;
    nb = 1337;
}

int main()
{
    int *pn;
    pn = foo();
    printf("%d\n", *pn);
    bar();
    printf("%d\n", *pn);


    
}
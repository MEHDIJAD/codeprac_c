#include<stdio.h>

int main()
{
    int n;  
    int *pn;   // is a pointer to an integer. It holds the memory address of an integer variable n
    int **ppn; // is a pointer to a pointer to an integer. It holds the memory address of a pointer to an integer
    int ***pppn;// is a pointer to a pointer to a pointer to an integer. It holds the memory address of a pointer to a pointer to an integer

    n = 42;
    pn = &n;
    ppn = &pn;
    pppn = &ppn;

    //printf("%d", ***pppn);
    printf("%p == %p", **pppn, pn); // they are the same // ** dereference on 2 levels to get to np(address) (if we do 1 level we get to npp(address))
                                    // 3 level we get to n(value)
}
#include<stdio.h>

int main()
{
    char c;
    char *pc;
    pc = &c;

    printf("%p\n%p\n%p\n%p\n", pc, pc + 1, pc + 2, pc + 3); // formula for pointer arithmetic is : pointer + (n * sizeof(type))
}
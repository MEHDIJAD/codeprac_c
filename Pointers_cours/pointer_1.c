#include<stdio.h>
void change_value(int *nb);

int main()
{
    int nb = 20;
    change_value(&nb);
    printf("%d", nb); // output is ==> 20 ???  (PASS-BY-VALUE)
}

void change_value(int *nb)
{
    
 *nb = 1337; // nb is changing a copy of nb to 1337 not the nb in main
            // * : dereference with a pointer (PASS-BY-REFRENCE)
}

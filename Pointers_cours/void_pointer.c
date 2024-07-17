#include<stdio.h>

void print_Data(void *data, char dataType)
{
    if (dataType == 'i') 
    printf("integer: %d\n", *(int*)data);
    else if (dataType == 'f')
    printf("float: %E\n", *(float*)data);
    else if (dataType == 'c')
    printf("character: %c\n", *(char*)data);
    else
    printf("Unknown data type.\n");  
}

int main()
{
    int intValue  = 42;
    print_Data(&intValue, 'i');
    print_Data(&intValue, 'f');
    print_Data(&intValue, 'c');

    
}
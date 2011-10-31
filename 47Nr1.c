#include <stdio.h>

int main()
{
    int short_size = sizeof(short);
    int int_size = sizeof(int);
    int long_size = sizeof(long);
    int float_size = sizeof(float);
    int double_size = sizeof(double);
    
    printf("Groesse von short: %d", short_size);
    printf("\nGroesse von int: %d", int_size);
    printf("\nGroesse von long: %d", long_size);
    printf("\nGroesse von float: %d", float_size);
    printf("\nGroesse von double: %d", double_size);
    
    return 0;
}
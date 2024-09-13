#include"stdio.h"
#include"myutils.h"
#include<stdlib.h>
int main() {
    int a, b, c, d;
    a = 10;
    b = 20;  

    c = sum(a, b);    // Calls sum function
    d = square(a);    // Calls square function

    int *ptr = malloc(100);   // Allocating memory using malloc

    printf("c = %d, d = %d\n", c, d);   // Print the results

    free(ptr);  // Always free the memory after use
    printf("ptr[0] = %d\n", ptr[0]);       // Prints the value at ptr[0] (uninitialized memory). This causes **undefined behavior** since the memory is uninitialized, but not guaranteed to raise an error immediately in most cases.
    return 0;
}

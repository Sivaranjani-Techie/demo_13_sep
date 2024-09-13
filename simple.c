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

    //free(ptr);  // Always free the memory after use
    return 0;
}

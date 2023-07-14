#include <stdio.h>
#include "main.h"
#include "mylib.h"

void printHello() {
    int result = add(10, 5);
    printf("Addition result: %d\n", result);
    
    result = subtract(10, 5);
    printf("Subtraction result: %d\n", result);
}

int main() {
    printHello();
    return 0;
}

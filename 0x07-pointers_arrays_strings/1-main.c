#include "main.h"
#include <stdio.h>

int main(void)
{
    char dest[10];
    char src[] = "Hello";
    char *result;

    result = my_memcpy(dest, src, sizeof(src));
    printf("Copied string: %s\n", result);

    return 0;
}

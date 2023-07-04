#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'W';
    char *result;

    result = strchr(str, ch);

    if (result != NULL) {
        printf("'%c' found at index: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string.\n", ch);
    }

    return 0;
}

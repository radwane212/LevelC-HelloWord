#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {
        putchar('\n');
        return;
    }

    putchar(*s);
    _puts_recursion(s + 1);
}

int main(void) {
    char message[] = "Puts with recursion";
    _puts_recursion(message);
    return 0;
}

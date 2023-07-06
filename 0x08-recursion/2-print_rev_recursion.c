#include <stdio.h>

void print_rev_recursion(char *s) {
    if (*s == '\0') {
        return;
    }
    print_rev_recursion(s + 1);
    putchar(*s);
}

int main(void) {
    char message[] = "Print in reverse using recursion";
    print_rev_recursion(message);
    putchar('\n');
    return 0;
}

#include <stdio.h>

void custom_puts(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');
}

int main(void) {
    char message[] = "Custom puts implementation";
    custom_puts(message);
    return 0;
}

#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int main() {
    // Call _putchar function to output characters
    _putchar('H');
    _putchar('e');
    _putchar('l');
    _putchar('l');
    _putchar('o');
    _putchar('\n');

    return 0;
}

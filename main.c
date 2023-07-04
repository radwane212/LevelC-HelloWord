#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) {
        if (i % 10 == 0 && i != 0) {
            printf("\n");
        }
        printf("0x%02x ", buffer[i]);
    }
    printf("\n");
}

void _memset(char *buffer, char value, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++) {
        buffer[i] = value;
    }
}

int main(void)
{
    char buffer[10];

    // Initialize buffer with zeros
    _memset(buffer, 0x00, sizeof(buffer));

    // Print the initial contents of the buffer
    printf("Initial buffer:\n");
    simple_print_buffer(buffer, sizeof(buffer));
    printf("\n");

    // Fill the buffer with value 0xFF
    _memset(buffer, 0xFF, sizeof(buffer));

    // Print the updated contents of the buffer
    printf("Updated buffer:\n");
    simple_print_buffer(buffer, sizeof(buffer));
    printf("\n");

    return 0;
}

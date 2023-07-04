#include "main.h"

void *my_memcpy(void *dest, const void *src, size_t n);
:wq{
    // Cast the pointers to char* for byte-wise copying
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    // Copy 'n' bytes from 'src' to 'dest'
    for (size_t i = 0; i < n; i++) {
        cdest[i] = csrc[i];
    }

    return dest;
}

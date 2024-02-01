#include <stdlib.h>

void __attribute__((constructor)) preload(void) {
    // Override the numbers chosen by the user
    setenv("GM_NUMBERS", "1 2 3 4 5 6 7", 1);
}


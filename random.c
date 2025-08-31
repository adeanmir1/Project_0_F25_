#include <stdlib.h>
#include <time.h>
#include "random.h"

void rand_string(char *s, size_t len) {
    static int seeded = 0;
    if (!seeded) { srand((unsigned)time(NULL)); seeded = 1; }

    if (!s || len == 0) return;

    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    const int A = (int)(sizeof(alphabet) - 1);

    for (size_t i = 0; i < len; ++i) {
        s[i] = alphabet[rand() % A];
    }
    s[len] = '\0'; // assumes caller allocated len+1 bytes
}

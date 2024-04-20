#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct example1 {
    int x, x2;
    char y;
    int z;
} example1_t;

typedef struct example2 {
    long long a;
    example1_t e;
} example2_t;

int main(void) {
    example2_t t;

    printf("Size of t: %zu\n", sizeof(t));
    printf("Offset of y within t: %zu\n", offsetof(example2_t, e.y));
}
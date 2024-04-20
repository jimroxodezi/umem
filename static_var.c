#include <stdlib.h>
#include <stdio.h>

// static variables are automatically initialized to zero by the compiler
static int sum;

static inline int add(const int i) {
    sum += i;
    return sum;
}

int main(void) {
    printf("%d\n", add(5));
    printf("%d\n", add(5));
    printf("%d\n", add(5));

    return EXIT_SUCCESS;
}
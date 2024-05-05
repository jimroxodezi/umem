

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

bool is_power_of_2(uintptr_t x) {
    return (x != 0) && ((x & (x-1)) == 0);
}

struct abc {
    unsigned char    a;
    int     b;
    double  c;
};

int main() {
    unsigned long x = 1024;
    printf("%d\n", is_power_of_2((uintptr_t)x));
    // assert(is_power_of_2((uintptr_t)x)==true);

    size_t offset_a = offsetof(struct abc, a);
    size_t offset_b = offsetof(struct abc, b);
    size_t offset_c = offsetof(struct abc, c);
    printf("%lu\n", offset_a);
    printf("%lu\n", offset_b);
    printf("%lu\n", offset_c);
    printf("Size of struct abc: %zu\n", sizeof(struct abc));
    printf("Size of char type: %zu\n", sizeof(unsigned char));
    printf("Size of int type: %zu\n", sizeof(int));
    printf("Size of double type: %zu\n", sizeof(double));
}
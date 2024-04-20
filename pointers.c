#include <stdlib.h>
#include <stdio.h>

int main(void) {
    long long a = 15;
    long long b = 20;
    long long result = &a - &b;

    long long* p = malloc(sizeof (long long));
    long long* q = malloc(sizeof (long long));
    long long result2 = p - q;

    printf("Result := %lld with &a = %p, &b = %p\n", result, &a, &b);
    printf("Result2 := %lld with p = %p, q = %p\n", result2, p, q);
}
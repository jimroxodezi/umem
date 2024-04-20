#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int arr1[] = { 1, 2 };
    int arr2[] = { 1, 2 };

    if (memcmp(arr1, arr2, 2 * sizeof(int)) == 0) {
        printf("Arrays are the same\n");
    } else {
        printf("Arrays are not the same\n");
    }

    memset(arr1, 0, 2 * __SIZEOF_INT__);
    printf("{ %d, %d }\n", arr1[0], arr1[1]);
    return 0;
}
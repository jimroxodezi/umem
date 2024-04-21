#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print__bytes(void* array, size_t elem_size, size_t size) {
    size_t i;
    for (i = 0; i < size; i++) {
        printf("%08lX ", ((unsigned char*)array)[i] + (i * elem_size) );
    }
    printf("\n");
}


int main(void) {
    // int arr1[] = { 1, 2 };
    // int arr2[] = { 1, 2 };

    // if (memcmp(arr1, arr2, 2 * sizeof(int)) == 0) {
    //     printf("Arrays are the same\n");
    // } else {
    //     printf("Arrays are not the same\n");
    // }

    // memset(arr1, 0, 2 * __SIZEOF_INT__);
    // printf("{ %d, %d }\n", arr1[0], arr1[1]);

    int arr[] = { 20, 30, 40, 50};
    print__bytes(arr, __SIZEOF_INT__, 4);


    return 0;
}
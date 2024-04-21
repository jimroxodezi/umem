#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
    char str[] = "Start stop";
    printf("%s\n", str);

    memcpy(str, str+6, 4 * sizeof (char));
    memmove(str, str+6, 4 * sizeof (char));
    printf("%s\n", str);

}
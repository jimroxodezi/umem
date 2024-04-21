#include <stdio.h>

int main(void) {
    // unsigned char n = 0;
    // int i;
    // for ( i = 0; i < 50; i++)
    // {
    //     printf("%hhu  <|>  %hhX\n", n, n);
    //     n++;
    // }

    unsigned num = 25500;
    printf("%-8X\n", num);
    printf("%08X\n", num);
    printf("%8X\n", num);
    
}
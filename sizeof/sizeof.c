#include <stdio.h>
#include <stdint.h>
typedef uint32_t u32;
typedef int32_t  s32;
typedef uint16_t u16;
typedef int16_t  s16;

int main() {
    // sizeof evaluates the size of a variable
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of long long int: %lu bytes\n", sizeof(long long int));
    printf("Size of unsigned short int: %lu bytes\n", sizeof(unsigned short int));
    printf("Size of unsigned long int: %lu bytes\n", sizeof(unsigned long int));
    printf("Size of int16_t: %lu bytes\n", sizeof(int16_t));
    printf("Size of uint16_t: %lu bytes\n", sizeof(uint16_t));
    printf("size of int32_t: %lu bytes\n", sizeof(int32_t));
    printf("size of uint32_t: %lu bytes\n", sizeof(uint32_t));
    printf("size of int64_t: %lu bytes\n", sizeof(int64_t));
    printf("size of uint64_t: %lu bytes\n", sizeof(uint64_t));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of unsigned char: %lu byte\n", sizeof(unsigned char));
    return 0;
}

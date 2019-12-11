#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t a;
    uint32_t b;
    uint16_t c;
    uint8_t d;
} T;

int main()
{
    printf("sizeof T: %zu\n", sizeof(T));
    return 0;
}

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define FLAG_OK (1ul << 2)

int main()
{
    uint32_t flag = 0;

    printf("flag=0x%08x\n", flag);
    printf("FLAG_OK: 0x%08x  ~FLAG_OK: 0x%08x\n", FLAG_OK, ~FLAG_OK);

    flag |= FLAG_OK;
    printf("set: flag=0x%08x\n", flag);

    flag &= ~FLAG_OK;
    printf("clear: flag=0x%08x\n", flag);

    flag ^= FLAG_OK;
    printf("toggle: flag=0x%08x\n", flag);

    flag ^= FLAG_OK;
    printf("toggle: flag=0x%08x\n", flag);


    uint32_t num = 0xdead0330;
    printf("last bit of 0x%08x is 0x%08x\n", num, num & (-num));
    printf("last bit index of 0x%08x is %f\n", num, log2f(num & (-num)));

    return 0;
}

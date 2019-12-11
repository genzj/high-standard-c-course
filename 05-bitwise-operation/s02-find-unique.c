#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t array[] = {1, 2, 5, 4, 6, 8, 9, 2, 1, 4, 5, 8, 9};
    size_t idx;
    uint32_t unique = 0;

    for (idx = 0; idx < sizeof(array) / sizeof(array[0]); ++idx)
    {
        unique ^= array[idx];
    }

    printf("unique element is: %u\n", unique);
    return 0;
}

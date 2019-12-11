#include <stdio.h>

#define MAX_MACRO(x_, y_) ((x_) > (y_) ? (x_) : (y_))

static inline int max_inline(int x, int y) {
    return x > y ? x : y;
}

static int get_x()
{
    printf("get_x is invoked\n");
    return 10;
}

int main(int argc, char const *argv[])
{
    printf("max macro: %d\n", MAX_MACRO(get_x(), 0));
    printf("max inline: %d\n", max_inline(get_x(), 0));
}

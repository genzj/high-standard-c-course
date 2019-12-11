#include "s01-incorrect-header.h"
#include <stdio.h>


int func() {
    printf("in func: g_flag = %d\n", g_flag);
    return 0;
}

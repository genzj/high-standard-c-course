#include "s01-incorrect-header.h"
#include <stdio.h>

int main()
{
    printf("g_flag = %d\n", g_flag);
    func();
    return 0;
}

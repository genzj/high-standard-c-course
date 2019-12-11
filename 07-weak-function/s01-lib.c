#include "s01-lib.h"

#include <stdio.h>

char const *get_name_impl() __attribute__((weak));

char const *get_name_impl()
{
    return "no name";
}

void fun()
{
    printf("Hello %s!\n", get_name_impl());
}

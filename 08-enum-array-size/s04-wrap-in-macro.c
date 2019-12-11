#include <stdio.h>

typedef enum
{
    E_TA = 0,
    E_TB,
    E_TC,

    E_NUM,
} E_T;

char *const p[] = {
    "Type A",
    "Type B",
    "Type C",
};

#define CHECK_ARR_LEN(_arr, _item_type, _len)                                       \
    char __##arr_##_arr##_len_neq_##_len[sizeof(_arr) / sizeof(_item_type) + 1] = { \
        [_len] = 1}

void _x()
{
    CHECK_ARR_LEN(p, char *const, E_NUM);
}

int main(void)
{
    printf("%s\n", p[E_TA]);
    printf("%s\n", p[E_TB]);
    printf("%s\n", p[E_TC]);
    return 0;
}

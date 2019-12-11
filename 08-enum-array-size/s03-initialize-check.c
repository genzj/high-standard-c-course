#include <stdio.h>
#include <assert.h>

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


static void __check_len_mismatch() {
    char __len_mismatch[sizeof(p) / sizeof(p[0]) + 1] = {
        [E_NUM] = 1
    };
}

int main(void)
{
    printf("%s\n", p[E_TA]);
    printf("%s\n", p[E_TB]);
    printf("%s\n", p[E_TC]);
    return 0;
}

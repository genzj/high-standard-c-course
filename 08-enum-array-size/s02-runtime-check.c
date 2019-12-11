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

int main(void)
{
    assert(sizeof(p) / sizeof(p[0]) >= E_NUM);
    printf("%s\n", p[E_TA]);
    printf("%s\n", p[E_TB]);
    printf("%s\n", p[E_TC]);
    return 0;
}

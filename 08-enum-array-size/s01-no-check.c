#include <stdio.h>

typedef enum
{
    E_TA = 0,
    E_TB,
    E_TC,
} E_T;

char *const p[] = {
    "Type A",
    "Type B",
    "Type C",
};

int main(void)
{
    printf("%s\n", p[E_TA]);
    printf("%s\n", p[E_TB]);
    printf("%s\n", p[E_TC]);
    return 0;
}

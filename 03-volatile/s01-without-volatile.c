#include <stdint.h>

int g_flag = 0;

int main()
{
    while (!g_flag)
    {
        continue;
    }

    // Do something...

    g_flag = 0;

    return 0;
}

void isr(void)
{
    g_flag = 1;
}

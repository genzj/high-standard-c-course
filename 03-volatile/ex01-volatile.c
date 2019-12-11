#include <stdint.h>

#define IO_A_STATUS_REGISTER_ADDR (uint8_t)(0xdeadbea0)
#define IO_B_STATUS_REGISTER_ADDR (uint8_t)(0xdeadbea1)

#define IO_DONE (0x01)

uint8_t *status_register;

void task1()
{
    while (!(*status_register & IO_DONE))
        ;
    // do something
}

void task2()
{
    if (status_register == IO_A_STATUS_REGISTER_ADDR)
    {
        status_register = IO_B_STATUS_REGISTER_ADDR;
    }
    else
    {
        status_register = IO_A_STATUS_REGISTER_ADDR;
    }
    // do something
}

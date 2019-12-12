int *ptr = (int *)0xdeadbeaf;
volatile int vobj = 0;

void task1()
{
    *ptr = 0x1234;
    asm volatile(""
                 :
                 :
                 : "memory");
    vobj = 1;
}

void task2()
{
    while (!vobj)
        ;
    printf("*ptr = %d\n", *ptr);
}

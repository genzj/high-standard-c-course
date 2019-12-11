#include <stdio.h>
#include <string.h>

void *my_memcpy(void *s1, void const *s2, size_t n)
{
    char *p1 = s1;
    char const *p2 = s2;
    while (n > 0)
    {
        *p1++ = *p2++;
        n--;
    }
    return s1;
}

int main(int argc, char const *argv[])
{
    char src[] = {'1', '2', '3', '4', '5', '6', '7', '8', 'x', '\0'};
    // char target[9] = {0};
    char *target = &src[1];
    my_memcpy(target, src, 8);

    printf("src memory: %s\n", src);
    printf("target memory: %s\n", target);
}

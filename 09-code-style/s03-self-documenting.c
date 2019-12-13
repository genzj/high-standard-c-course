// ref: https://en.wikipedia.org/wiki/Self-documenting_code

#include <stdlib.h>

size_t count(const char *s)
{
    size_t count = 0;

    if (s)
    {
        while (*s != '\0')
        {
            if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
                count++;
            s++;
        }

        return count;
    }

    return count;
}

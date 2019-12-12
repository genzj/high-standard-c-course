#include <stdlib.h>


typedef struct
{
    char const *cmd;
    int (*func)(size_t, char *[]);
} Command;


#define COMMAND_REGISTER(cmd, callback)

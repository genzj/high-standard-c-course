#include <string.h>

int execute(char const *cmd)
{
    if (0 == strncmp(cmd, "ls", 2))
    {
        // execute "ls"
    }
    else if (0 == strncmp(cmd, "cat", 3))
    {
        // execute "cat xxx.txt"
    } // ...
    else
    {
        // send error
    }
    return 0;
}

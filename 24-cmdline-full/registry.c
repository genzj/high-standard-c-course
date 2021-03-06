#include <string.h>
#include "registry-generated.h"

extern int cmd_error(size_t argc, char *argv[]);

int parse(char const *cmd, size_t *argc, char *argv[], size_t max_argv)
{
    // split cmd by spaces and save arguments to argv
    return 0;
}

int execute(char const *cmd)
{
    size_t argc;
    char *argv[10];
    int rc;

    if (0 != (rc = parse(cmd, &argc, argv, sizeof(argv) / sizeof(argv[0]))))
    {
        return rc;
    }

    for (size_t idx = 0; idx < sizeof(registry) / sizeof(registry[0]); ++idx)
    {
        if (0 == strcmp(argv[0], registry[idx].cmd)) {
            return registry[idx].func(argc, argv);
        }
    }

    return cmd_error(argc, argv);
}

#include <string.h>

int parse(char const *cmd, size_t *argc, char *argv[], size_t max_argv)
{
    // split cmd by spaces and save arguments to argv
    return 0;
}

extern int cmd_ls(size_t argc, char const *argv[]);
extern int cmd_cat(size_t argc, char const *argv[]);
extern int cmd_error(size_t argc, char const *argv[]);

int execute(char const *cmd)
{
    size_t argc;
    char *argv[10];
    int rc;

    if (0 != (rc = parse(cmd, &argc, argv, sizeof(argv) / sizeof(argv[0]))))
    {
        return rc;
    }

    if (0 == strcmp(argv[0], "ls"))
    {
        cmd_ls(argc, argv);
    }
    else if (0 == strcmp(argv[0], "cat"))
    {
        cmd_cat(argc, argv);
    }
    else
    {
        cmd_error(argc, argv);
    }
    return 0;
}

import re
import pathlib

register_macro_pattern = re.compile(
    r'COMMAND_REGISTER\(("[^"]+"), *([a-zA-Z_0-9]+)\);'
)

cmd_path = pathlib.Path('.') / 'cmd'

cmds = []

for f in cmd_path.glob('*.c'):
    if f.is_file():
        with open(f, 'r') as inf:
            for line in inf:
                m = register_macro_pattern.search(line)
                if m:
                    cmds.append(m.group(1, 2))


print('#include "registry.h"')
print()
for cmd, callback in cmds:
    print('extern int %s(size_t argc, char const *argv[]);' % (callback, ))
print()

print('static Command registry[] = {')
for cmd, callback in cmds:
    print('    {.cmd = %s, .func = %s},' % (cmd, callback))
print('};')

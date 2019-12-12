# -pg : Generate extra code to write profile information suitable for the
# analysis program gprof. You must use this option when compiling the source
# files you want data about, and you must also use it when linking.

gcc -Wall -pg test-gprof.c test-gprof-new.c -o test.exe

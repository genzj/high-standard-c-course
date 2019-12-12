# How to use gprof

## Build and run

1. Build the executable with profile information:

    ```sh
    gcc -Wall -pg test-gprof.c test-gprof-new.c -o test.exe
    ```

2. Run the executable file:

    ```sh
    ./test.exe
    ```

## Check Text Result

```sh
gprof test.exe gmon.out
```

## Convert Profiling to Graph

1. Prerequisites:

    * Python and pip need to be installed
    * `graphviz` needs to be installed and its installation path needs to be added
      to the PATH environment variable
    * `gprof2dot` needs to be installed by `pip install gprof2dot`

2. Converting:

    ```sh
    gprof test.exe gmon.out | gprof2dot | dot -Tpng -o output.png
    ```

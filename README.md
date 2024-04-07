# Template for C++ 17 projects with CMake >= 3.5 and Catch2 v3

To test that everything is okay, clone the project, then step into the directory and execute

```
cmake -B build
cd build
make
make test
```

A single test called **sum_test** should run and pass. If this does not work, there are probably issues with the Catch2 dependency.

# Potential Memory Leak in C

This repository demonstrates a potential memory leak in a simple C program that uses `malloc` and `memcpy`. The program allocates memory, copies data, and then frees the memory. However, if an exception occurs between `malloc` and `free`, the allocated memory will not be released, leading to a memory leak.

## Bug Description

The bug lies in the lack of proper error handling after calling `malloc`.  If `malloc` fails (returns `NULL`), the program will attempt to use the invalid pointer, leading to undefined behavior or a crash.  Even if `malloc` succeeds, an exception after `malloc` and before `free` results in a leak.

## Bug Solution

The solution addresses these issues by checking the return value of `malloc` and using a `finally` block to guarantee that the memory is freed in both cases (successful or failed `malloc`).

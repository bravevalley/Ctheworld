# Learning C with K&R

I am learning C with *The C Programming Language* by Brian W. Kernighan and Dennis M. Ritchie, commonly known as the K&R book. I am working through the ideas in the book by writing small programs and completing exercises along the way.

My goal is to understand programming more deeply, build a solid foundation in C, and sharpen my problem-solving skills. I want to learn not only how to make a program work, but also how to reason about its steps, use memory carefully, and write clear, reliable code.

## What I am practicing

- C fundamentals, including expressions, types, and control flow
- Functions, arrays, strings, and pointers
- Character and input/output handling
- Breaking a problem into smaller steps
- Testing, debugging, and improving my code

## Exercises

- `get-putchar-test.c` — experimenting with character input and output
- `reverse_string.c` — practicing string and character handling
- `wc.c` — building a word-counting program

These programs are part of my learning process. I will add to them as I continue through the book and its exercises.

## Building a program

With GCC installed, compile a source file from this directory. For example:

```sh
gcc -Wall -Wextra -std=c11 wc.c -o wc
```

On Windows, run the resulting executable with:

```powershell
./wc.exe
```

Replace `wc.c` and `wc` with the source file and output name for another exercise.

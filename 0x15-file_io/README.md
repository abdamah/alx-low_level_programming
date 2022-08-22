#   C - File I/O

## General Concept

- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their **POSIX** names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Resources
**Read or watch:**

- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

## Man or Help:
- open
- close
- read
- write
- dprintf

## More Info

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- *Don’t forget to push your header file*
- All your header files should be include guarded
**Tip**: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ... vs read(0, ...`

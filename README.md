# SecurityProject-CS466

The purpose of this code is to show a basic implementation of a buffer overflow. This is important as it is one of the most basic types of attacks.

The program was created in C. It was compiled and run by the commands:
gcc BufferOverflow.c -o attack
attack [input]

A small buffer of size 5 is created. Any input is tried to be forced into it using the strcpy() function, but if it is bigger than the size of the buffer, a buffer overflow error will occur and theoretically would run into a segmentation fault. MOBA provides protection against this however and dumps the core before this can happen.

We have not violated the honor code.

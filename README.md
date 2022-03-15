# :printer: printf
### Write your own printf function

## What is printf? ##

Printf is to do formatted printing in the C language.


> What is this project for?

:couple:This is the 1st group project and means to complete the task together!! :couple::couple::couple:

## Description ##
A formatted output conversion C program completed .
The program is a recreation of the C standard library function printf from scratch.

## How to use? ##
To use the _printf compile all `.c` files in the repository and include the header `main.h`.

Example main.c:
```
#include "main.h"
/**
 * main - function print
 * Return: 0
 */

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```
Compilation:
```
$ gcc *.c -o
```
Output:
```
$
Hello, World!
$
```
## Flowchart ##

![This is an image](https://user-images.githubusercontent.com/69083631/158465780-cb509342-8788-4d8e-bd28-93ea99dd0b85.jpg)



> Resources:
[printf (3)](https://github.com/gregcdjm/printf/edit/main/man_3_printf)


> Requirements:
```
General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples.
- You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).
- We will use our own main.c files at compilation.
- Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project
```
> Authorized functions and macros:
```
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
```
Compilation:
Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file [main.h](https://github.com/gregcdjm/printf/edit/main/main.h): (#include main.h)
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use: [main.c](https://github.com/gregcdjm/printf/edit/main/main.c)

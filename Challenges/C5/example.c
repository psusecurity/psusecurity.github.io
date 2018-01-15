/*
  $ ulimit -c unlimited
  $ gcc -o example example.c
  $ ./example
  Then you will see one file named core generated.
 */


#include <stdio.h>
#include <stdlib.h>

int  myvar;
int* pointer;

int main(void)
{
 myvar = 50;
 printf("Location of myvar: %p\n", &myvar);
 pointer = 0;
 *pointer = 0;
 return EXIT_SUCCESS;
}


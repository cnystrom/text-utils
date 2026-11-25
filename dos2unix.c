/*
 *  dos2unix.c
 *
 *  by Chris Nystrom
 *
 */

#include <stdio.h>

#define LF  10
#define CR  13
#define SUB 26

main()
{
  int c;

  c = getchar();
  while (c != EOF) { 
    if (c == SUB)
      exit(0);
    if (c != CR)
      putchar(c);
    c = getchar();
  }
}


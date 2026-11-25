/*
 *  dos2unix.c
 *
 *  by Chris Nystrom
 *
 *  Version 1.1 (2026): bug fixes; original 1.0 from 8 Nov 1997.
 *
 */

#include <stdio.h>

#define LF  10
#define CR  13
#define SUB 26

int main(void)
{
  int c;

  c = getchar();
  while (c != EOF) { 
    if (c == SUB)
      break;
    if (c != CR)
      putchar(c);
    c = getchar();
  }
  if (ferror(stdin) || ferror(stdout) || fflush(stdout) == EOF)
    return 1;
  return 0;
}


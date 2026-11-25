/*
 *  unix2dos.c
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
  int c, prev = EOF;

  c = getchar();
  while (c != EOF) {
    if (c == LF && prev != CR)
      putchar(CR);
    putchar(c);
    prev = c;
    c = getchar();
  }
  putchar(SUB);
  if (ferror(stdin) || ferror(stdout) || fflush(stdout) == EOF)
    return 1;
  return 0;
}


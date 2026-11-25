/*
 *  mk80col.c
 *
 *  Converts text files greater than 80 columns to 80 columns
 *
 *  by Chris Nystrom
 *
 *  Version 1.1 (2026): bug fixes; original 1.0 from 8 Nov 1997.
 *
 */

#include <stdio.h>

int main(void)
{
  int c, i = 0, n;

  c = getchar();

  while (c != EOF)
  {
    if (c == '\r')
    {
      i = 0;
      putchar(c);
      c = getchar();
      continue;
    }
    if (c == '\t')
    {
      n = 8 - (i % 8);
      if (i + n > 80)
      {
        putchar('\n');
        i = 0;
        n = 8;
      }
      i += n;
      putchar(c);
      c = getchar();
      continue;
    }
    i++;
    if (i == 81 && c != '\n')
    {
      putchar('\n');
      i = 1;
    }
    if (c == '\n')
      i = 0;
    putchar(c);
    c = getchar();
  }
  if (ferror(stdin) || ferror(stdout) || fflush(stdout) == EOF)
    return 1;
  return 0;
}


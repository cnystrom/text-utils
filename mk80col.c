/*
 *  mk80col.c
 *
 *  Converts text files greater than 80 columns to 80 columns
 *
 *  by Chris Nystrom
 *
 */

#include <stdio.h>

main()
{
  int c, i = 0;

  c = getchar();

  while (c != EOF)
  {
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
}


# text-utils

Three small C filters from Chris Nystrom's old programs page:

- **dos2unix** — Converts DOS text files to Unix format.
- **unix2dos** — Converts Unix text files to DOS format.
- **mk80col** — Converts text files greater than 80 columns to 80 columns.

The descriptions above are the wording from the programs page.

## Origin

Recovered from Chris Nystrom's old programs page on cactus.org
(`http://www.cactus.org/~nystrom/programs.html`, also later served from
`outserv.cactus.org/~nystrom/programs.html`).

The programs page itself is archived at:

https://web.archive.org/web/20090106010843/http://outserv.cactus.org/~nystrom/programs.html

The sources were captured by the Wayback Machine from www.cactus.org on
8 Nov 1997 (and later recaptures are byte-identical). The raw captures used:

- https://web.archive.org/web/19971108102549id_/http://www.cactus.org/~nystrom/dos2unix.c
- https://web.archive.org/web/19971108102558id_/http://www.cactus.org/~nystrom/unix2dos.c
- https://web.archive.org/web/19971108102605id_/http://www.cactus.org/~nystrom/mk80col.c

The source files have no year in the headers. They are simply signed
"by Chris Nystrom".

## License

No license stated in the original.

## Build

These are tiny K&R-style C programs (`main()` with no return type).

On a current gcc they fail in the default language mode (implicit `int`).
They build with either of:

```
gcc -std=c89 -O0 dos2unix.c -o dos2unix
gcc -std=gnu89 -O0 dos2unix.c -o dos2unix
```

The same flags work for `unix2dos.c` and `mk80col.c`. The code was not
modified to make it compile.

They read stdin and write stdout.

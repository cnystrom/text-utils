# text-utils

Three small C filters from Chris Nystrom's old programs page:

- **dos2unix** — Converts DOS text files to Unix format.
- **unix2dos** — Converts Unix text files to DOS format.
- **mk80col** — Converts text files greater than 80 columns to 80 columns.

The descriptions above are the wording from the programs page.

## Origin

From Chris Nystrom's old programs page (originally on cactus.org):

https://nystrom.family/chris/old/programs.html

The sources are on that site:

- https://nystrom.family/chris/old/dos2unix.c
- https://nystrom.family/chris/old/unix2dos.c
- https://nystrom.family/chris/old/mk80col.c

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

# text-utils

Three small C filters from Chris Nystrom's old programs page:

- **dos2unix** — Converts DOS text files to Unix format.
- **unix2dos** — Converts Unix text files to DOS format.
- **mk80col** — Converts text files greater than 80 columns to 80 columns.

The descriptions above are the wording from the programs page.

## Origin

From Chris Nystrom's old programs page (originally on cactus.org):

https://nystrom.family/chris/old/programs.html

All of Chris's code: https://nystrom.family/chris/code/

The sources are on that site:

- https://nystrom.family/chris/old/dos2unix.c
- https://nystrom.family/chris/old/unix2dos.c
- https://nystrom.family/chris/old/mk80col.c

The source files have no year in the headers. They are simply signed
"by Chris Nystrom".

## License

No license stated in the original.

This work is dedicated to the public domain under the Unlicense; see LICENSE.

## Version 1.1 (2026)

Bug fixes; the 1.0 originals from 8 Nov 1997 are kept under the tag `v1.0`.

- All three: `main` now returns `int` and a proper exit status (0 on
  success, 1 on a write error), so they build with current compilers.
  unix2dos no longer always exits 26.
- dos2unix, unix2dos: write errors (for example a full disk) are reported.
- unix2dos: lines that already end in CR LF are no longer doubled to CR CR LF.
- mk80col: the CR of a DOS line ending no longer counts as a column, and
  tabs advance to the next 8-column tab stop.

unix2dos still appends Ctrl-Z, and dos2unix still stops at it, as before.

## Build

    cc -O2 -o dos2unix dos2unix.c
    cc -O2 -o unix2dos unix2dos.c
    cc -O2 -o mk80col mk80col.c

Each is a filter: `dos2unix < in.txt > out.txt`.

#if 0
gcc -o nct nct.c
return
#endif

#include <stdio.h>
#define nct main
#define IN  int
#define CH  char
#define CS  CH *
#define LOG printf
#define WI  while
#define RT  return

IN nct(IN argc, CS argv[]) {
  argc--;
  argv = &argv[1];
  WI (argc) {
    CS file = argv[0];
    LOG("%s\n", file);
    argc--;
    argv = &argv[1];
  }
  RT 0;
}

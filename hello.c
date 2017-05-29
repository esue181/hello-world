#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("invalid args!\n");
    return -1;
  }
  printf("hello world.\n");
  return 0;
}

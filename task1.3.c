#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
int f = 10;
  char **p;
  for (p = environ; *p != NULL; p++){ /* перебор всех элементов массива */
    printf("%s\n", *p); /* разыменование указателя */
    if(f==1) {
    break;
    }
    f--;
  }
}

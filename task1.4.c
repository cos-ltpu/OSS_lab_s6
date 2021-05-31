#include <stdio.h>


extern char **environ;
int main(int argc, char *argv[])
{
	char str[80];
	int f;
	sscanf(argv[1], "%d", &f);
  char **p;
  for (p = environ; *p != NULL; p++){ /* перебор всех элементов массива */
    printf("%s\n", *p); /* разыменование указателя */
    if(f==1) {
    break;
    }
    f--;
  }
}

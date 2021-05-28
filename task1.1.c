#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
	int count = 0;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    count = count + 1; /* разыменование указателя */
	printf("Number of environment variables: %d", count);
}

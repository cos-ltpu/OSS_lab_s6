#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
	int count_e = 0;
	int count_a = 0;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    count_e = count_e + 1; /* разыменование указателя */
	for(int j = 0; j < argc; j++)
    	count_a = count_a + 1;
 	 printf("Number of environment variables: %d of arguments: %d", count_e, count_a);
}

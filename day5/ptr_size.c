
#include <stdio.h>

int main(void)
{
	int *empty;
	int year = 1881;

	empty = &year;

	printf("empty  : %p\n", (void*)empty);
	printf("empty+1: %p\n", (void*)(empty + 1));
	printf("empty+2: %p\n", (void*)(empty + 2));
	printf("empty[0]: %d\n", empty[0]);

	printf("  empty  [1]: %x\n",   empty  [1]);
	printf("*(empty + 1): %x\n", *(empty + 1/* * sizeof(*empty) */));

	printf("empty[2]: %x\n", empty[2]);

}

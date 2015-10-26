
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[64];

	printf("Hello, %s!\n", name);
	printf("What's your name? ");

	fgets(name, 64, stdin);
	name[63] = 'b';
	name[64] = 'c';
	name[65] = 'd';
	name[97] = 'b';

	printf("Hello, %s!\n", name);

}

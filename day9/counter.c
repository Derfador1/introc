
#include <stdio.h>

int counter(void)
{
	static int c = 0;

	return c++;
}

int main(void)
{

	for(int n = 0; n < 10; ++n) {
		printf("counter: %d\n", counter());
	}
}


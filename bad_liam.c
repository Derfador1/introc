
#include <stdio.h>

void bad_naughty_function(void);


int main(void)
{
	int a = 2;
	int b = 3;
	int c = 5;

	bad_naughty_function();

	printf("%d, %d, %d\n", a, b, c);

}

void bad_naughty_function(void)
{
	int data[5] = {0};

	data[15] = 7;

	printf("%d\n", data[14]);
}






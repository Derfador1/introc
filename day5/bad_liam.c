
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
	int data[][3] = {{11, 13}, {17, 19}, {23}};

	data[15][0] = 7;

	printf("data is %zd big\n", sizeof(data));

	printf("%d\n", data[14][0]);
}






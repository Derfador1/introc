
#include <stdio.h>

struct card {
	int rank;
	char suit;
};

int main(void)
{

	printf("size is %zd\n", sizeof(struct card));

}

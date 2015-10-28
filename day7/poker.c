
#include <stdio.h>

struct card {
	int rank;
	char suit;
};

int main(void)
{

	struct card three_of_hearts;

	three_of_hearts.suit = 'H';
	three_of_hearts.rank = 3;

	printf("%d of %c\n", three_of_hearts.rank, three_of_hearts.suit);

}

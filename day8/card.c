
#include <stdio.h>

struct card {
	int rank;
	char *suit;
};

void print_card(struct card);

void print_card(struct card the_card)
{
	printf("%d of %s\n", the_card.rank, the_card.suit);
}


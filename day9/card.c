
#include "card.h"

#include <stdio.h>

char *suits[] = { "Clubs", "Diamonds",
	"Hearts", "Spades"};

void print_card(struct card the_card)
{
	printf("%d of %s\n", the_card.rank, suits[the_card.suit]);
}



#include "card.h"

#include <stdio.h>

void print_card(struct card the_card)
{
	printf("%d of %s\n", the_card.rank, the_card.suit);
}


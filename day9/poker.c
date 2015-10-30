
#include <stdio.h>

#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck *bicycle;
	if(!(bicycle = make_deck())) {
		return 1;
	}

	print_deck(bicycle);
	free_deck(bicycle);
}

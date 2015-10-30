
#include <stdio.h>

#include "card.h"
#include "deck.h"

int main(void)
{
	int ret = 0;
	struct deck *bicycle, *bee, *poop;
	if(!(bicycle = make_deck())) {
		ret = 1;
		goto END;
	}
	if(!(bee = make_deck())) {
		ret = 1;
		goto BIKE_FREE;
	}
	if(!(poop = make_deck())) {
		ret = 1;
		goto BEE_FREE;
	}

	print_deck(poop);
	print_deck(bee);
	print_deck(bicycle);

	free_deck(poop);
BEE_FREE:
	free_deck(bee);
BIKE_FREE:
	free_deck(bicycle);
END:
	return ret;
}


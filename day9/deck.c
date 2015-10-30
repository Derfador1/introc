
#include "deck.h"

#include <stdlib.h>


struct deck *make_deck(void)
{
	struct deck *pile;
	pile = malloc(sizeof(struct deck));
	if(!pile) {
		return NULL;
	}

	for(int suit = 0; suit < 4; ++suit) {
		for(int rank = 2; rank < 15; ++rank) {
			pile->cards[rank + 13*suit - 2].rank = rank;
			pile->cards[rank + 13*suit - 2].suit = suit;
		}
	}
	pile->cards_used = 0;

	return pile;
}


void print_deck(struct deck *pile)
{
	for(int n = pile->cards_used; n < 52; ++n) {
		print_card(pile->cards[n]);
	}
}


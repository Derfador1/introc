
#ifndef DECK_H
 #define DECK_H

#include "card.h"

/* Array of cards
 * Only cards from cards_used to
 * index 51 are valid cards in
 * the deck.
 */
struct deck {
	struct card cards[52];
	int cards_used;
};

struct deck *make_deck(void);

void free_deck(struct deck *);

void print_deck(struct deck *);

#endif

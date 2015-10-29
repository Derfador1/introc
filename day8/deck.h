
#ifndef DECK_H
 #define DECK_H

#include "card.h"

extern const char *deck_color;

struct deck {
	struct card cards[52];
	int cards_used;
};

#endif

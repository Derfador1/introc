
#ifndef CARD_H
 #define CARD_H

enum denomination {CLUBS, DIAMONDS, HEARTS, SPADES};

struct card {
	int rank;
	enum denomination suit;
};

void print_card(struct card);

#endif

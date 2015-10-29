
#ifndef CARD_H
 #define CARD_H

struct card {
	int rank;
	char *suit;
};

void print_card(struct card);

#endif

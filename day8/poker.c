
#include <stdio.h>

#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck bicycle;

	const int fievel = 3;

	int *sneaky = (int*)&fievel;

	*sneaky = 4;

	printf("fievel: %d\n", fievel);

	bicycle.cards[0].rank = 3;
	bicycle.cards[0].suit = HEARTS;
	print_card(bicycle.cards[0]);

	printf("What a lovely %s deck\n", deck_color);
}

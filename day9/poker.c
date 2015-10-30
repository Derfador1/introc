
#include <stdio.h>

#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck bicycle;

	bicycle.cards[0].rank = 3;
	bicycle.cards[0].suit = HEARTS;

	print_deck(&bicycle);
}

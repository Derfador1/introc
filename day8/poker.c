
#include "card.h"
#include "deck.h"

int main(void)
{
	struct deck bicycle;

	bicycle.cards[0].rank = 3;
	bicycle.cards[0].suit = 5;
	print_card(bicycle.cards[0]);
}

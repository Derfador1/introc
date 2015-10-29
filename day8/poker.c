
#include "card.c"

int main(void)
{
	struct card three_of_hearts;

	three_of_hearts.rank = 3;
	three_of_hearts.suit = "Hearts";
	print_card(three_of_hearts);
}

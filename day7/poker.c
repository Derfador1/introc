
#include <stdio.h>
#include <string.h>

struct card {
	int rank;
	char *suit;
};

void print_card(struct card);

int main(void)
{
	char d_array[] = {'D', 'i', 'a', 'm', 'o', 'n', 'd', 's', '\0'};
	struct card three_of_hearts;

	three_of_hearts.rank = 3;
	three_of_hearts.suit = d_array;
	print_card(three_of_hearts);

	three_of_hearts.suit = "Hearts";
	print_card(three_of_hearts);
}

void print_card(struct card the_card)
{
	printf("%d of %s\n", the_card.rank, the_card.suit);
}

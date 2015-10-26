
#include <stdio.h>

int main(void)
{
	char data[][9] = {
		"Bilbo", "Frito", "Goodgulf", "Sorehead", "Gimlet", "Legolam"
	};

	data[2] = "Arrowroot";

	data[3][8] = '9';
	data[0][6] = 'H';
	data[0][7] = 'i';
	data[0][8] = '!';


	printf("%zd bytes\n", sizeof(data));
	printf("%s\n", data[3]);
	printf("%s\n", data[0]);

}

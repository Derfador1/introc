
#include <stdio.h>

int main(void)
{
	char *data[] = {
		"Bilbo", "Frito", "Goodgulf", "Sorehead", "Gimlet", "Legolam"
	};

	printf("%s\n", data[2]);
	data[2] = "Arrowroot";
	printf("%s\n", data[2]);

	printf("%zd bytes\n", sizeof(data));
	printf("%s\n", data[3]);
	printf("%s\n", data[0]);
	printf("%p\n", data[0]);
}

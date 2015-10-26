
#include <stdio.h>

void change_value(int *);

int main(void)
{
	int *data;
	int year = 1776;

	data = &year;

	printf("year is %d\n", year);
	printf("data is %p\n", (void*)data);
	change_value(data);
	printf("&year is %p\n", (void*)&year);
	printf("*data is %d\n", *data);

}

void change_value(int *value)
{
	*value = 17;
}


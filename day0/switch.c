
#include <stdio.h>


int main(void)
{
	int grade = 7;

	switch(grade) {
		case 6:
		case 5:
			printf("Excellent work!");
			printf("A");
			break;
		case 4:
			printf("B"); break;
		case 3:
			printf("C"); break;
		case 2:
			printf("D"); break;
		case 1:
			printf("E"); break;
		default:
			printf("F"); break;
	}

}

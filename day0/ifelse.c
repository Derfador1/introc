
#include <stdio.h>


int main(void)
{
	int grade = 3;

	if(grade == 6 || grade == 5) {
		printf("Excellent work! ");
		printf("A\n");
	} else if(grade == 4) {
		printf("B\n");
	} else if(grade == 3) {
		printf("C\n");
	} else if(grade == 2) {
label_alpha:
		printf("D\n");
	} else if(grade == 1) {
		printf("E\n");
	} else {
		printf("F\n");
	}

	goto label_alpha;


}


#include <math.h>
#include <stdio.h>

double quadratic(double, double, double);
void print_number(double);

int main(void)
{
	double x = 2.0, y = -3.0, z = 1.0;

	double result = quadratic(x, y, z);

	print_number(result);
}

double quadratic(double a, double b, double c)
{
	return (-b + sqrt(b*b - 4*a*c)) / (2*a);
}

void print_number(double x)
{
	printf("!!%f\n", x);
}


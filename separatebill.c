#include <stdio.h>
#include <cs50.c>

float half(float bill, float tax, int tip);

int main(void)
{
	float bill = get_float("Bill before tax and tip: ");
	float taxPercent = get_float("Sale tax percent: ");
	int tipPercent = get_float("Tip percent: ");

	// Print out the money to pay
	printf("You will owe $%.2f each!\n", half(bill, taxPercent, tipPercent));
}

float half(float bill, float tax, int tip)
{
	// Bill calculation method is
	// Bill + tax then add tip
	bill += bill * (tax / 100);

	bill += bill * ((float)tip / 100);

	// Separate the bill to half
	return bill / 2;
}
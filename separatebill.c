#include <stdio.h>
#include <cs50.c>

int main(void)
{
	float bill = get_float("Bill before tax and tip: ");
	float taxPercent = get_float("Sale tax percent: ");
	int tipPercent = get_float("Tip percent: ");

	// Bill calculation method is
	// Bill + tax then add tip

	bill += bill * (taxPercent / 100);

	bill += bill * ((float)tipPercent / 100);

	// Separate the bill to half
	float separatedBill = bill / 2;

	// Print out the money to pay
	printf("You will owe $%.2f each!\n", separatedBill);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 *@i : interger
 * return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

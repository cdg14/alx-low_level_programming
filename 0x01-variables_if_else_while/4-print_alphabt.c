#include <stdio.h>

/**
 * main-program entry point.
 *
 * Description: This program prints letters a to z, excluding q and e.
 *
 * Return:0 if no error, non zero if error.
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' || i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}


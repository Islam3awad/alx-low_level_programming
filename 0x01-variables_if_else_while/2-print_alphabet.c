#include <stdio.h>

/**
 * main - entry point
 * Description: print all aplhabet letters
 * greater than, in zero and is not less than 6.
 *
 * return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

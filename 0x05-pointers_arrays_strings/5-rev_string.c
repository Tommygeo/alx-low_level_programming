#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char revv = s[0];
	int counters = 0;
	int p;

	while (s[counters] != '\0')
		counters++;
	for (p = 0; p < counters; p++)
	{
		counters--;
		revv = s[p];
		s[p] = s[counters];
		s[counters] = revv;
	}
}

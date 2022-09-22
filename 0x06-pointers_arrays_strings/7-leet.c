#include "main.h"
/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: address of s
 */
char *leet(char *s)
{
	int b, c;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (b = 0; *(s + b); b++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (a[c] == *(s + b))
				*(s + b) = b[c];
		}
	}
	return (s);
}

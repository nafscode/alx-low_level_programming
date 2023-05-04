#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: string
 * Return: string
 */

char *rot13(char *src)
{
	int i;
	int j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (src[i] == alpha[j])
			{
				src[i] = rot13[j];
				break;
			}
		}
	}
	return (src);
}

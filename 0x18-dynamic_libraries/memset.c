#include "main.h"
/**
 * *_memset - function takes fills n amt
 * @s : first str
 * @b : second str
 * @n : integer
 *
 * Return: If s can store the sum - a pointer to the result.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return start;
}

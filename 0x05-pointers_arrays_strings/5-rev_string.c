#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string to be reversed
  *
  *Return: returns nothing on success
  */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}

	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		last_char = s[last - i];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}

#include "main.h"

/**
  *_isupper - Checks for the lowercase character
  *@c: The character to be checked
  *Return: 1 for uppercase character and 0 for anything else
  */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

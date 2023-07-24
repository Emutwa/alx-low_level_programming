#include "main.h"

/**
  *swap_int - swaps the value of to integers
  *@a: first number
  *@b: second number
  *
  *Return: returns nothing on success
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

#include <stdio.h>

/**
  *_strcpy - copies the string pointed by src, inclunding the terminator \
  null byte (\0), to the buffer pointed by dest
  *@dest: destination of string
  *@src: string been copied
  *
  *Return: return copied string;
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (*src)
	{
		src++;
		count++;
	}

	for (i = 0; i < count; i++)
		src--;

	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i] = *src;

	return (dest);
}

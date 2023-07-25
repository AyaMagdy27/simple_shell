#include "shell.h"
/**
 * _strncpy- copies a string
 * @dest: string
 * @src: source string
 * @n: char to be copied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 * _strncat- concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: char
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
 * _strchr- locates a character in a string
 * @S: string
 * @c: character
 * Return: s pointer to memory area s
 */
char *_strchr(char *S, char c)
{
	do {
		if (*S == c)
			return (S);
	} while (*S++ != '\0');
	return (NULL);
}

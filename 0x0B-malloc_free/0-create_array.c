#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of a size and assigned char c
 * @size: size of array
 * @c: char to be assigned
 * Description: create an array and character
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);

}		

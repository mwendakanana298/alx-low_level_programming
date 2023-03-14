#Include "main.h"
#include <stdllib.h>

/**
 * create_array-create array of size and assign char c
 * @size: the size of the array
 * @c: char to assign
 * Return: pointer to array, or NULL if fail
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

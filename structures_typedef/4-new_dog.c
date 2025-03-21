#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    size_t len = 0, i;

    if (str == NULL)
        return (NULL);

    /* Calculate string length */
    while (str[len])
        len++;

    /* Allocate memory for duplicate */
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    /* Copy characters */
    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}

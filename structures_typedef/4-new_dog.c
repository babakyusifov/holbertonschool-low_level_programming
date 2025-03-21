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

/**
 * new_dog - creates a new dog_t structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog_t structure or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    /* Allocate memory for the dog structure */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Duplicate name */
    dog->name = _strdup(name);
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    /* Duplicate owner */
    dog->owner = _strdup(owner);
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    /* Assign age */
    dog->age = age;

    return (dog);
}

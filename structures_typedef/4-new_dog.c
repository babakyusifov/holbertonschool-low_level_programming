#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: pointer to the new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;

    /* Allocate memory for struct */
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Duplicate and assign name */
    p->name = strdup(name);
    if (p->name == NULL)
    {
        free(p);
        return (NULL);
    }

    /* Duplicate and assign owner */
    p->owner = strdup(owner);
    if (p->owner == NULL)
    {
        free(p->name);
        free(p);
        return (NULL);
    }

    /* Assign age */
    p->age = age;

    return (p);
}

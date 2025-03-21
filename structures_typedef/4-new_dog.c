#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *doggy;
    int nlen, olen;

    if (name == NULL || owner == NULL)
        return (NULL);

    nlen = strlen(name) + 1;  // +1 for null terminator
    olen = strlen(owner) + 1;

    // Allocate memory for struct
    doggy = malloc(sizeof(dog_t));
    if (doggy == NULL)
        return (NULL);

    // Allocate memory for name
    doggy->name = malloc(nlen * sizeof(char));
    if (doggy->name == NULL)
    {
        free(doggy);
        return (NULL);
    }

    // Allocate memory for owner
    doggy->owner = malloc(olen * sizeof(char));
    if (doggy->owner == NULL)
    {
        free(doggy->name);
        free(doggy);
        return (NULL);
    }

    // Copy values
    strcpy(doggy->name, name);
    strcpy(doggy->owner, owner);
    doggy->age = age;

    return (doggy);
}

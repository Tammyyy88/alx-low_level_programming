#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
    int name_len, owner_len;

    if (name == NULL || owner == NULL)
        return (NULL);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    new_dog->name = malloc(sizeof(char) * (name_len + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    _strcpy(new_dog->name, name);
    new_dog->age = age;
    _strcpy(new_dog->owner, owner);
return (new_dog);
}

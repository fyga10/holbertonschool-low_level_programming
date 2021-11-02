#include "dog.h"
#include <stdlib.h>
void copy_S(char *original, char *copy);
int length(char *string);

/**
 * new_dog - Create a new dog with given parameters
 * @name: dogs name
 * @age: dogs age
 * @owner: owners dog
 * Return: the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(length(name) + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->age = age;
dog->owner = malloc(length(owner) + 1);
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
copy_S(name, dog->name);
copy_S(owner, dog->owner);
return (dog);
}

/**
 * copy_S - Copy
 * @original: original
 * @copy: copy
 */
void copy_S(char *original, char *copy)
{
int a;
for (a = 0; a <= length(original); a++)
{
*(copy + a) = *(original + a);
}
}

/**
 * length - length of a string
 * @string: string
 * Return: length
 */
int length(char *string)
{
int a;
for (a = 0; *(string + a); a++)
;
return (a);
}

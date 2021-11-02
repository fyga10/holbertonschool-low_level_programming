#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
if (!d)
{
return;
}
else
{
printf("Name: ");
if (d->name == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", d->name);
}
printf("Age: %f\n", d->age);
printf("Owner: ");
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", d->owner);
}
}
}

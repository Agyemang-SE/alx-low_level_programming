#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function initialize variable type
 *
 * @d: structure pointer
 * @name: takes the name
 * @age: takes the age
 * @owner: takes the name of the owner
 *
 * Description: initialize a dog structure
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;

}
}

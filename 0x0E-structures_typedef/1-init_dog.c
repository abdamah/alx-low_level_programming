#include "dog.h"

/**
* init_dog - inits a variable of
*type dog
*@d: dog identification
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
/** -> arrow member*/
d->name = name;
/** . dot member */
(*d).age = age;
(*d).owner = owner;
}
}

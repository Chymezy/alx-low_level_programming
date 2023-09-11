#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: name pararmeter
 * @age: age pararmeter
 * @owner: owner pararmeter
 */
struct dog
{
	char *name;
	float age;
	char *owner;

} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

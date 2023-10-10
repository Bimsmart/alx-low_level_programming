#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this is a structure
 * @name: the name
 * @age: how old
 * @owner: who owns it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

#ifndef DOG
#define DOG
/**
 * struct dog - a dog structure
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the owners name
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif


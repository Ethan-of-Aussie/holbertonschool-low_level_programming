#ifndef MAIN_H
#define MAIN_H
/**
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *dog(char *name, float age, char *owner);
#endif

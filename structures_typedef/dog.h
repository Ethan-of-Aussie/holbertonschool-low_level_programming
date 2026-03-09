#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#ifndef DOG_H
#define DOG_H
/**
 *dog - struct with name, age, owner variables
*@name: exemple, Poppy.
*@age: exemple, 3 years old.
*@owner:exemple, Poppy's owners name is daryl
 *Return: The output of the struct. Name, Age, Owner.                                                                                                           */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

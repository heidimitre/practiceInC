#include <stdio.h>
#include "person.h"
#include <stdlib.h>
struct person* create_person(char *newName, int newAge)
{
	struct person *person = (struct person*)malloc(sizeof(struct person));
	person->name = newName;
	person->age = newAge;
	person->next = NULL; 
}

void print_person(struct person* person)
{
	printf("Person's name is: %s\n", person->name);
	printf("Person's age is: %d\n", person->age);
}

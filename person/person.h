#ifndef _PERSON_H_
#define _PERSON_H_

struct person
{
	char *name;
	int age;
	struct person *next;
};
struct person* create_person(char *newName, int newAge);
void print_person(struct person* person);

#endif

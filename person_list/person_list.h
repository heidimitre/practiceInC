#ifndef _PERSON_LIST_H_
#define _PERSON_LIST_H_

#include "../person/person.h"

struct person_list
{
	struct person *head;
	int size;
};

struct person_list* create_person_list();
void add_person(struct person *p, struct person_list *pl);
void delete_person(char *name, struct person_list *pl);
void print_person_list(struct person_list *pl);
void delete_list(struct person_list *pl);

#endif

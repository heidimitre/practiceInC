#include "../person_list/person_list.h"
#include <string.h>
#include <stdlib.h>

struct person_list* create_person_list()
{
	struct person_list *list = (struct person_list*)malloc(sizeof(struct person_list));
	list->head = NULL;
	list->size = 0;

	return list;
}

void add_person(struct person *p, struct person_list *pl)
{
	p->next = pl->head;
	pl->head = p;
}

void delete_person(char *name, struct person_list *pl)
{
	struct person *temp = pl->head;
	struct person *prev = NULL;
	while(temp != NULL)
	{
		if(strcmp(temp->name, name) == 0)
		{
			if(prev == NULL)
			{
				pl->head = temp->next;
				free(temp);
				return;
			}
			prev->next = temp->next;
			free(temp);
			return;			
		}
		prev = temp;
		temp = temp->next;
	}
}

void print_person_list(struct person_list *pl)
{
	struct person *temp = pl->head;
	while(temp != NULL)
	{
		print_person(temp);
		temp = temp->next;
	}
}

void delete_helper(struct person *p)
{
	if(p != NULL)
	{
		delete_helper(p->next);
		free(p);
	}
}

void delete_list(struct person_list *pl)
{
	delete_helper(pl->head);
	free(pl);
}

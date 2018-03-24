#include <stdio.h>
#include "person/person.h"
#include "person_list/person_list.h"

int main()
{
	struct person_list *list = create_person_list();

	struct person *my_person1 = create_person("Heidi", 26);
	add_person(my_person1, list);

	struct person *my_person2 = create_person("Jay", 26);
	add_person(my_person2, list);

	struct person *my_person3 = create_person("Bob", 22);
	add_person(my_person3, list);

	print_person_list(list);
	
	delete_person("Jay", list);
	print_person_list(list);

	delete_list(list);

	return 0;
}

#include <stdio.h>
#include "person.h"
int main()
{
	struct person *my_person = create_person("Heidi", 26);
	print_person(my_person);
	return 0;
}

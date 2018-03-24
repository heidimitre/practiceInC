struct person
{
	char *name;
	int age;
};
struct person* create_person(char *newName, int newAge);
void print_person(struct person* person);

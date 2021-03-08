#ifndef STRTYP
#define STRTYP

/**
  *struct dog - creates structure of a dog.
  *@name: first member.
  *@age: second member.
  *@owner: third member.
  *Description: the structure of a dog.
  */
struct dog
{
	char *name; 
	float age;
	char *owner;
};
typedef struct dog dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* STRTYP */

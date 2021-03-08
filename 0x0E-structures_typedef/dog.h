#ifndef DOG_H
#define DOG_H
/**
  *struct dog - creates structure of a dog.
  *@name: first member.
  *@owner: second member.
  *@age: third member.
  */
struct dog {
	char *name; 
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H*/

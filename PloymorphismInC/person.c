#include "person.h"
#include <string.h>
#include <stdlib.h>	

Person *CreatePerson(char *pFName, char *pLName)
{
	int maxRange = 15;
    Person *person = malloc(sizeof(Person));
    memcpy(person->pFirstName, pFName, maxRange);
	memcpy(person->pLastName, pLName, maxRange);
	return person;
}

void DeletePerson(Person *this)
{
	free(this);
}

void PersonDisplayInfo(Person *pPersonObj)
{
	printf("FirstName: %s\n", pPersonObj->pFirstName);
	printf("LastName: %s\n", pPersonObj->pLastName);
}
#ifndef _PERSON_H
#define _PERSON_H

#include <string.h>
#include <stdlib.h>	

typedef struct _Person
{
	char pFirstName[16];
	char pLastName [16];
}Person;

Person *CreatePerson(char *pFName, char *pLName);
void DeletePerson(Person *this);

void PersonDisplayInfo(Person *pPersonObj);

#endif
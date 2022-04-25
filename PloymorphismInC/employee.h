#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "person.h"
#include <string.h>
#include <stdlib.h>	

typedef struct _Employee
{
	Person *pBaseObj;
	char pDepartment[16];
	char pCompany[16];
	int salary;
}Employee;

Employee *CreateEmployee(char *pFName, char *pLName, char *pDepartment, char *pCompany, int salary);
void DeleteEmployee(Employee *pPersonObj);

void EmployeeDisplayInfo(Employee *pPersonObj);

#endif
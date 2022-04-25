#include <string.h>
#include <stdlib.h>
#include "employee.h"
#include "person.h"

Employee *CreateEmployee(char *pFName, char *pLName, char *pDepartment, char *pCompany, int salary)
{
	Employee *pEmpObj;
	Person *pObj;
	int maxRange = 15;
	pObj = CreatePerson(pFName, pLName);	//calling base class construtor
	//allocating memory
	pEmpObj = malloc(sizeof(Employee));
	pEmpObj->pBaseObj = pObj;
	//initialising derived class members
	memcpy(pEmpObj->pDepartment, pDepartment, maxRange);
	memcpy(pEmpObj->pCompany, pCompany, maxRange);
	pEmpObj->salary = salary;

	return pEmpObj;
}

void DeleteEmployee(Employee *this)
{
	free(this);
}

void EmployeeDisplayInfo(Employee *pEmpObj)
{
	Person* pPerObj = pEmpObj->pBaseObj;
	//displaying Person info
	PersonDisplayInfo(pPerObj);
	//displaying Employee specific info
	printf("Department: %s\n", pEmpObj->pDepartment);
	printf("Company: %s\n", pEmpObj->pCompany);
	printf("salary: %d\n", pEmpObj->salary);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "person.c"
#include "employee.c"

//#define DOLOG
#ifdef DOLOG
#define LOG(...) fprintf(log,__VA_ARGS__);
#else
#define LOG(...) 
#endif

int main(void)
{
    char commandBuf[64];

#ifdef DOLOG
    FILE *log = fopen("log","w");
    if(log == NULL){
        perror("log file creation fails: ");
        return EXIT_FAILURE;
    }
#endif

    Person *jaimito  = CreatePerson("Gonzalo", "casas");

	PersonDisplayInfo(jaimito);

	Employee *mierda = CreateEmployee("Samuel", "Morales", "Martes", "De Homosexualidad", 4000);

	EmployeeDisplayInfo(mierda);

    while (fgets(commandBuf, sizeof(commandBuf), stdin) != NULL)
    {
        commandBuf[strlen(commandBuf) - 1] = 0;

        if (strncmp(commandBuf, "exit", strlen("exit")) == 0)
        {
            // TERMINA EL CICLO INTERACTIVO
            LOG("running exit\n");
            break;
        }
    }

    return EXIT_SUCCESS;
}
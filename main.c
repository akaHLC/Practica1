/*
 TITLE: PROGRAMMING II LABS                          SUBTITLE: Practical II
 AUTHOR 1: Iago Fuentes Aller                        LOGIN 1: i.fuentes.aller
 AUTHOR 2: María Rodríguez Teijeiro                  LOGIN 2: **********
 GROUP: 2.1                                          DATE: 24/02/2022
 */
/*
 * Objetivo: Diseñar una estructura de datos que permita almacenar conjuntamente toda la información asociada a los productos.
 * Entradas:
 * Salidas:
 * Precondiciones:
 * Postcondiciones:
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

#define MAX_BUFFER 255

#ifdef DYNAMIC_LIST
#include "dynamic_list.h"
#endif
#ifdef STATIC_LIST
#include "static_list.h"
#endif




void processCommand(char *commandNumber, char command, char *param1, char *param2, char *param3, char *param4) {

    switch (command) {
        case 'N':
            printf("Command: %s %c %s %s %s %s\n", commandNumber, command, param1, param2, param3, param4);
            break;
        case 'S':
            break;
        case 'B':
            break;
        case 'D':
            break;
        default:
            break;
    }
}

void readTasks(char *filename) {
    FILE *f = NULL;
    char *commandNumber, *command, *param1, *param2, *param3, *param4;
    const char delimiters[] = " \n\r";
    char buffer[MAX_BUFFER];

    f = fopen(filename, "r");

    if (f != NULL) {

        while (fgets(buffer, MAX_BUFFER, f)) {
            commandNumber = strtok(buffer, delimiters);
            command = strtok(NULL, delimiters);
            param1 = strtok(NULL, delimiters);
            param2 = strtok(NULL, delimiters);
            param3 = strtok(NULL, delimiters);
            param4 = strtok(NULL, delimiters);

            processCommand(commandNumber, command[0], param1, param2, param3, param4);
        }

        fclose(f);

    } else {
        printf("Cannot open file %s.\n", filename);
    }
}


int main(int nargs, char **args) {

    char *file_name = "new.txt";

    if (nargs > 1) {
        file_name = args[1];
    } else {
        #ifdef INPUT_FILE
        file_name = INPUT_FILE;
        #endif
    }

    readTasks(file_name);

    return 0;
}







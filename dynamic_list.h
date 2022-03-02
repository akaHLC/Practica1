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

#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H

#include "types.h"
#include <stdbool.h>

#define LNULL NULL

    typedef struct tItemL;

    typedef struct tNode* tPosL;

    struct tNode {
        tItemL data;
        tPosL next;
    };
    typedef tPosL tList;

#endif

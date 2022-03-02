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

#include "dynamic_list.h"

#define LNULL

 void createEmptyList (tList* L) {
     *L = LNULL;
 }
 bool isEmptyList (tList L) {
     return (L == LNULL);
 }
 tPosL first (tList L) {
     return L;
 }
 tPosL next (tPosL p, tList L) {
     return p->next;
 }
 tPosL last (tList L) {
     tPosL p;
     for (p = L; p->next != LNULL; p = p-> next);
     return p;
 }
 tPosL previous (tPosL p; tList p) {
     tPosL q;

     if (p = L)
         return LNULL;
     else {
         for (g = L; q-> next != p; q= q->next);
     }
 }
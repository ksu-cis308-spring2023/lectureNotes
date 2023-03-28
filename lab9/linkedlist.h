#include "types.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

void add(int elem, NODE** head);

void printlist(NODE* head);

void releasemem(NODE* head);

#endif
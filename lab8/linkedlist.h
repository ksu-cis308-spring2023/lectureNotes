#include <stdlib.h>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
    int data;
    struct node* next;
};

void add(int elem, struct node* head);

void printlist(struct node* head);

void releasemem(struct node* head);

#endif
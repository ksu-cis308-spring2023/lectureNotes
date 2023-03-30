//what do we include?
#include <stdlib.h>
#include "types.h"
#include "linkedlist.h"
#include <stdio.h>

void add(int elem, NODE** head) {
    if (*head == NULL) {
        *head = malloc(sizeof(NODE));
        (*head)->data = elem;
        (*head)->next = NULL;
    }
    else {
        NODE* temp = *head;

        //loop until we get to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = malloc(sizeof(NODE));
        temp->next->data = elem;
        temp->next->next = NULL;
    }
    //we will see this function has a problem
}

void printlist(NODE* head) {
    NODE* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void releasemem(NODE* head) {
    NODE* temp = head;
    while (temp != NULL) {
        NODE *after = temp->next;
        free(temp);
        temp = after;
    }
}

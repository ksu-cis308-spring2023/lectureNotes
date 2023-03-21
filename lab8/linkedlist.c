#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

void add(int elem, struct node** head) {
    if (*head == NULL) {
        //elem should be the new head
        *head = malloc(sizeof(struct node));
        (*head)->data = elem;
        (*head)->next = NULL;
    }
    else {
        //find end of list
        //that node's next will be NULL
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        //temp is the last node
        temp->next = malloc(sizeof(struct node));
        temp->next->data = elem;
        temp->next->next = NULL;
    }

    //we will see this function has a problem
}

void printlist(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void releasemem(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        struct node* after = temp->next;
        free(temp);
        temp = after;
    }
}
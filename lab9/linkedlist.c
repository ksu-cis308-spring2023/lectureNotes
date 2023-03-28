#include "linkedlist.h"
#include "types.h"
#include <stdlib.h>
#include <stdio.h>

void add(int elem, struct node** head) {
    if (*head == NULL) {
        *head = malloc(sizeof(struct node));
        (*head)->data = elem;
        (*head)->next = NULL;
    }
    else {
        struct node* temp = *head;

        //loop until we get to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

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
        struct node *after = temp->next;
        free(temp);
        temp = after;
    }
}

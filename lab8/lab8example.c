#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    //want to create a linked list with
    //items 1-4, print it, release the memory

    struct node* head = NULL;
    for (int i = 1; i <= 4; i++) {
        add(i, &head);
    }

    printlist(head);
    releasemem(head);

    //free(head); NO! this memory has already been freed

    return 0;
}
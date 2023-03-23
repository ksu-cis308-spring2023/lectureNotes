#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    //want to create a linked list with
    //items 1-4, print it, release the memory

    struct node* list = NULL;
    for (int i = 1; i <= 4; i++) {
        add(i, &list);
    }

    printlist(list);
    releasemem(list);

    return 0;
}
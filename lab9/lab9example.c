#include "types.h"
#include "stack.h"
#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    //push 1-4 on stack, pop and print

    NODE* top = NULL;
    for (int i = 1; i <= 4; i++) {
        push(i, &top);
    }

    while (top != NULL) {
        printf("%d\n", pop(&top));
    }

    for (int i = 1; i <= 4; i++) {
        add(i, &top);
    }

    printlist(top);
    releasemem(top);

    return 0;
}
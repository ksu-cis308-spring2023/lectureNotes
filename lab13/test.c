#include <stdio.h>

int main() {
    int num = 4;
    void* ptr;
    //how to initialize ptr to point to num?
    ptr = &num;

    //ptr++; <-- can't do this, don't know how big
                //each memory spot is


    //how to print num using ptr?
    printf("%d\n", *((int*)ptr));

    //(need to cast to actual pointer type first)


    char* str = "hello";
    //make ptr point to hello
    ptr = str;

    //use ptr to print the "h"
    printf("%c\n", ((char*)ptr)[0]);

    return 0;
}
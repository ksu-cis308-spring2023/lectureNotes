#include <stdio.h>

int main() {
    int num = 4;
    void* ptr;
    //how to initialize ptr to point to num?
    ptr = &num;

    //how to print num using ptr?
    printf("%d\n", *((int*)ptr));


    char* str = "hello";
    //make ptr point to hello
    ptr = str;
    printf("%c\n", ((char*)ptr)[0]);


    //use ptr to print the "h"

    return 0;
}
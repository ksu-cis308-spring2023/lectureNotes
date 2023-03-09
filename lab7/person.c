#include <stdio.h>
#include "person.h"

void printperson(struct person p) {
    //print p's name and age
    printf("Name: %s, age: %d\n", p.name, p.age);

    //finish!
}

void birthday(struct person* p) {
    //make p be one year older
    (*p).age++;
}
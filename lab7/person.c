#include <stdio.h>
#include "person.h"

void printperson(struct person p) {
    //print p's name and age
    printf("Name: %s, age: %d\n", p.name, p.age);
}

struct person birthday(struct person p) {
    //make p be one year older
    p.age++;
    return p;
    //(we will see there is a problem)
}
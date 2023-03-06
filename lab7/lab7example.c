#include <stdio.h>
#include <string.h>
#include "person.h"

int main() {
    struct person p1;
    strcpy(p1.name, "Bob");
    p1.age = 20;

    //how could we get name/age as user inputs?

    //print p1, make p1 have a birthday, print p1 again

    return 0;
}
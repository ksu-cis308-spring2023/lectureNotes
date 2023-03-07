#ifndef PERSON_H
#define PERSON_H

struct person {
    char name[30];
    int age;
};

void printperson(struct person p);

void birthday(struct person* p);

#endif
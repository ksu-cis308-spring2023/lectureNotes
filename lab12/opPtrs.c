#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int times(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

typedef int (*OP) (int, int);

//Define doOperations function. Takes three parameters:
    //function pointer to a function that does the operation
        //(takes two int arguments and returns an int result)
    //two ints to do the operation on
//returns result of whatever operation function

int doOperations(OP ptr, int x, int y) {
    return ptr(x, y);
}


int main() {
    int num1 = 3;
    int num2 = 4;

    OP operations[4] = {plus,minus,times,divide};

    

    //maybe user enters 0-3 into "index"

    //do operation num1 and num2
    int answer = operations[index](num1, num2);

    printf("Answer: %d\n", answer);

    //use only the doOperation function

    return 0;
}
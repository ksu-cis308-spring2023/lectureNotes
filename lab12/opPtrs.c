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

typedef (int (*OP)(int, int);

int doOperation(OP op, int x, int y) {
    return op(x, y);
}

//Define doOperations function. Takes three parameters:
    //function pointer to a function that does the operation
        //(takes two int arguments and returns an int result)
    //two ints to do the operation on
//returns result of whatever operation function




int main() {
    int num1 = 3;
    int num2 = 4;

    OP allops[4] = {plus, minus, times, divide};

    //do operation num1 and num2
    int answer = allops[userInput](num1, num2);

    //multiply num1 and num2 using doOperation

    printf("Answer: %d\n", answer);

    return 0;
}
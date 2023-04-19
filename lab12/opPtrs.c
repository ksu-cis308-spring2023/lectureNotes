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



//Define doOperations function. Takes three parameters:
    //function pointer to a function that does the operation
        //(takes two int arguments and returns an int result)
    //two ints to do the operation on
//returns result of whatever operation function




int main() {
    int num1 = 3;
    int num2 = 4;



    //do operation num1 and num2
    int answer;

    //multiply num1 and num2 using doOperation

    printf("Answer: %d\n", answer);

    return 0;
}
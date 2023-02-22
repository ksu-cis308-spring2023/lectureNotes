#include <stdio.h>

int main() {
    int prod = 0;

    for (int i = 1; i < 3; i++) {
        prod = prod * i;
    }

    //Should print 3!, which is 6
    printf("Product is: %d\n", prod);

    return 0;
}
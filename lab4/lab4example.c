#include <stdio.h>

void swap(int, int);

void print_array(int*, int);

int main() {
    int x = 3;
    int y = 4;
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Old values: x = %d, y = %d\n", x, y);

    //call swap

    printf("New values: x = %d, y = %d\n", x, y);

    //call print_array

    return 0;
}

//will this work?
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void print_array(int* nums, int len) {
    //print array values using pointer notation
}

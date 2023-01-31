#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char buffer[100];

    while (fgets(buffer, 100, stdin) != NULL) {
        //buffer is the current line from the file
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("%s %s %s\n", argv[1], buffer, argv[2]);
    }

    return 0;
}
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("running Program \n");
    if(argc == 2 && strcmp(argv[1], "aH6Gn4I") == 0) {
        char[] flag = "someStuff";
        printf("Success! The Flag is: %s", &flag);
    } else {
        printf("requirements not met");
    }
}

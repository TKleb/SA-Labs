#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("running Program \n");

    if(argc == 2 && strcmp(argv[1], "aH6Gn4I") == 0) {
        char flag[] = "BgT";
        flag[0] = flag[0] - 1;
        flag[1] = flag[1] + 5;
        flag[2] = flag[2] + 0x18;
        printf("Success! The Flag is: %s", &flag);
    } else {
        printf("requirements not met\n");
        printf("Press any key to continue.\n");
        getch();
    }
}

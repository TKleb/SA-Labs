#include <stdio.h>
int main() {
    char password[20];

    printf("Enter super secret password: ");
    scanf("%s", &password);

    if(!strcmp(password, "Mysterious")) {
        printf("The way to get started is");
    }

    return 0;
}

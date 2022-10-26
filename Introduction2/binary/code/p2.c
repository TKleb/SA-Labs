#include <stdio.h>
int main() {
    char password[20];

    printf("Enter super secret password: ");
    scanf("%s", &password);

    if(!strcmp(password, "TickingNoise")) {
        printf("to quit talking and begin doing.");
    }

    return 0;
}

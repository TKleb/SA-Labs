#include <stdio.h>
int main() {
    char password[20];

    printf("Enter super secret password: ");
    scanf("%s", &password);

    if(!strcmp(password, "NotTheRealFlag")) {
        printf("Do Something");
    }

    return 0;
}

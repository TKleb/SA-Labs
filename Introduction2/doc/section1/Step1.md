# C-Code
In this exercise you will analyse your first Program to find a password which will "unlock" a program. Here it is simply a hardcoded string which will be compared with the Users Input and if it matches it will just print some text.

Here's the template which was used to create both programs used in this exercise.

```C
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
```

Your goal is to find the passwords of both programs and combine those to get the Flag.
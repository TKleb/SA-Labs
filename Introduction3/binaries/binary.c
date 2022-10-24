#include <stdio.h>
#include <string.h>

#define KEY_SIZE 10
#define PASSWORD_SIZE 20

int main() {
    char password[PASSWORD_SIZE];
	char enc_key[KEY_SIZE] = "#f8;s_541a";
	
    printf("Enter super secret password: ");
    scanf_s("%s", password, PASSWORD_SIZE);

	for (int i = 0; i < strlen(password); i++) {
		password[i] = password[i] ^ enc_key[i % KEY_SIZE];
	}

    if(!strcmp(password, "h4ck3rman_")) {
        printf("Successfully logged in!");
		return 0;
    }
	printf("Wrong password.");
    return 0;
}


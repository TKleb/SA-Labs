#include <stdio.h>
#include <string.h>

#define KEY_SIZE 11
#define PASSWORD_SIZE 20

int main() {
	char key[KEY_SIZE] = "_h4ck3rman_";
    char password[PASSWORD_SIZE];

    printf("Enter super secret password: ");
    scanf_s("%s", password, PASSWORD_SIZE);
 	
	*(key + 2) = 'n'; 
	*(key + 10) = 'x' >> 1;
	*(key + 9) = '7' >> 1;
 	*(key) = '2' << 1; 
	*(key + 1) = 'x' >> 1;
	*(key + 3) = 0x3F >> 4;
	*(key + 4) = ~(~0x36 << 1); 
	*(key + 5) = 'i';
	*(key + 1) = ~(~*(key + 1) << 1);
	*(key + 6) = 'a' >> 2;
	*(key + 3) = *(key + 3) << 4;
	*(key + 7) = 'a';
	*(key + 8) = 0x36 << 1;
	*(key + 9) = *(key + 9) << 2;
	*(key + 10) = ~(~*(key + 10) << 1);
	*(key + 3) = ~(~*(key + 3) << 1);
	*(key + 6) = ~(~*(key + 6) << 2);

    if(!strcmp(password, key)) {
        printf("Successfully logged in!");
		return 0;
    }
	printf("Wrong password.");
    return 0;
}


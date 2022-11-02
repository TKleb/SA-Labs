#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define FLAG_SIZE 255
#define INPUT_SIZE 20

void printFlag() {
	char buff[FLAG_SIZE];
	FILE *fp;

	fp = fopen("/flag.txt", "r");
	fscanf(fp, "%s", buff);
	printf("Success! The Flag is: %s \n", buff);
}

int calcChecksum(char* input) {
	int checksum = 0;
	for (size_t i = 0; i < strlen(input); i++) {
		checksum += *(input + i);
	}
	return checksum;
}

bool validatePassword(char* username, char* pw) {
	for (size_t i = 0; i < strlen(pw); i++) {
		*(pw + i) = *(pw + i) ^ 0x4b;
	}

	return calcChecksum(username) == calcChecksum(pw);
}

int main(int argc, char** argv) {

	char username[INPUT_SIZE];
    char password[INPUT_SIZE];

	while (true) {
		printf("Please enter your username: ");
		scanf("%s", username, INPUT_SIZE);
		
		printf("Please enter your password: ");
		scanf("%s", password, INPUT_SIZE);

		if(!validatePassword(username, password) || strlen(username) == 0 || strlen(password) == 0) {
			printf("Couldn't login with given credentials\n");
			continue;
		}

		printFlag();
	}
}
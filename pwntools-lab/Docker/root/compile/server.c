#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FLAG_SIZE 40
#define BUFF_SIZE 16

void printFlag() {
	char buff[FLAG_SIZE];
	FILE *fp;
	fp = fopen("/flag.txt", "r");
    
	if (!fp) {
        perror("/flag.txt");
        return;
    }
    
	fscanf(fp, "%s", buff);
	printf("Success! The Flag is: %s \n", buff);
	fflush(stdout);
}

void start() {
    char buffer[BUFF_SIZE];

    printf("Address of start(): %p\n", start);
    fflush(stdout);
    puts("Enter password to get access:");
    fflush(stdout);
    
    scanf("%s", buffer);
}

int main() {
    start();
    puts("Wrong password entered!");
    fflush(stdout);
    return 0;
}